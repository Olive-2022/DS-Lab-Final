#include<bits/stdc++.h>
using namespace std;
#define n 5

int A[5], head=0, tail=0, coun=0;

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
}

int main()
{
enqueue(10);
enqueue(20);

print();
cout<<"\nPop Value is "<<dequeue()<<endl;
cout<<"\nPop Value is "<<dequeue()<<endl;
cout<<"\nPop Value is "<<dequeue()<<endl;

return 0;
}
