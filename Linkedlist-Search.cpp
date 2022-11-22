#include<bits/stdc++.h>
using namespace std;

struct Node
{
int data;
struct Node* next;
};

struct Node * head=NULL;

void insertAtBeginning(int value)
{

struct Node *n1;
n1= new Node();
n1->data=value;
n1->next=NULL;

if(head==NULL)
{
head=n1;
}
else
{
n1->next=head;
head=n1;
}
}

void deleteFromBeginning()
{
struct Node * temp=head;
head=temp->next;
delete(temp);
}

void deleteFromEnd()
{
struct Node * temp=head;
while(temp->next->next!=NULL)
{
temp=temp->next;
}
temp->next=NULL;
delete(temp);
}

int searchInLinkedlist(int value)
{
struct Node * temp=head;
while(temp!=NULL)
{
if(value==temp->data) return 1;
temp=temp->next;
}
return 0;
}

void traversal()
{
struct Node * temp=head;

while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
cout<<endl;
}

int main()
{
insertAtBeginning(10);
insertAtBeginning(20);
insertAtBeginning(30);
insertAtBeginning(40);

traversal();

deleteFromEnd();

traversal();

deleteFromBeginning();
deleteFromBeginning();

traversal();

if(searchInLinkedlist(100)) cout<<"Found";
else cout<<"Not Found";

return 0;
}

