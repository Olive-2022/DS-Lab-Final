#include<bits/stdc++.h>
using namespace std;


template <typename T>

class MyStack
{
private:
int n;
T *a;
int top;

public:

MyStack(){cout<<"Default"<<endl;}
MyStack(int n)
{
 this->n=n;
    n=10;
    a= new T[n];
    top=-1;
}

bool isEmpty()
{
if(top<0)
{
return true;
}
else
{
return false;
}
}

bool isFull()
{
if(top==n-1)
{
return true;
}
else
{
return false;
}
}

void push(T data)
{
if(isFull())
{
cout<<"Stack Overflow."<<endl;
}
else
{
top++;
a[top]=data;
}
}

T pop()
{
if(isEmpty())
{
cout<<"Stack is empty."<<endl;
}
else
{
T value=a[top];
top--;
return value;
}
}

int getSize()
{
return top;
}


void print()
{
for(int i=top;i>=0;i--)
{
cout<<a[i]<<endl;
}
cout<<endl;
}

};

int main()
{
int n=10;

MyStack<string>m(n);

m.push("Olive");
m.push("Pritom");
m.push("Tawsif");
m.print();

return 0;
}
