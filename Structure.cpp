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

struct Student
{
int id;
string name;
double cgpa;
};

int main()
{
Student s[2];

for(int i=0;i<2;i++)
{
cin>>s[i].id>>s[i].name>>s[i].cgpa;
}

cout<<endl;

for(int i=0;i<2;i++)
{
cout<<s[i].id<<" "<<s[i].name<<" "<<s[i].cgpa<<endl;
}

return 0;
}

