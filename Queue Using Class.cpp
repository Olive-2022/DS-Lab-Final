#include<bits/stdc++.h>
using namespace std;

class Queue
{
private:
    int n;
    int *A;
    int head;
    int tail;
    int coun;

public:
    Queue(){cout<<"Default Constructor."<<endl;}
    Queue(int n)
    {
    this->n=n;
    n=10;
    A= new int[n];
    head=0;
    tail=0;
    coun=0;
    }


bool isFull()
{
if(tail==n-1)
{
return true;
}
else
{
return false;
}
}

bool isEmpty()
{
if (head==tail)
{
return true;
}
else
{
return false;
}
}
int enqueue(int value)
{
if(isFull())
{
cout<<"Queue is Full"<<" ";
}
else
{
A[tail]=value;
tail++;
coun++;
}
}

int dequeue()
{
if(!isEmpty())
{

int x=A[head];
head++;
coun--;
return x;
}
else
{
cout<<"Queue is Empty"<<" ";
}
}

void print()
{
for(int i=head; i<tail;i++)
{
cout<<A[i]<<" ";
}
cout<<"\nNumber of elements in the queue is "<<coun<<endl;
}
};

int main()
{
Queue q(5);
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.print();
cout<<"\nPop Value is "<<q.dequeue()<<endl;
q.print();
}
