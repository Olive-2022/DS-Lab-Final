#include<bits/stdc++.h>
using namespace std;

struct Node
{
int data;
struct Node* next;
};

struct Node * head=NULL;
struct Node * tail=NULL;


void enqueue(int value)
{

struct Node *n1;
n1= new Node();
n1->data=value;
n1->next=NULL;

if(head==NULL)
{
head=n1;
tail=n1;
}
else
{
tail->next=n1;
tail=n1;
}
}


void dequeue()
{
struct Node * temp=head;
head=temp->next;
delete(temp);
}

void printQueue()
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
enqueue(10);
enqueue(20);
enqueue(30);
enqueue(40);

printQueue();

dequeue();

printQueue();

enqueue(100);

printQueue();


return 0;
}

