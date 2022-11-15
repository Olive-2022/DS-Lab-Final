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

int main()
{
/*Node *n1 = new Node();
n1->data=10;
n1->next=NULL;

Node *n2 = new Node();
n2->data=20;
n2->next=NULL;

Node *n3 = new Node();
n3->data=30;
n3->next=NULL;

n1->next=n2;
n2->next=n3;

Node *head=n1;
Node *temp=n1;*/

insertAtBeginning(10);
insertAtBeginning(20);

struct Node * temp=head;

while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}

return 0;
}
