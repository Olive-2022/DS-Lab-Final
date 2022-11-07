#include<bits/stdc++.h>
using namespace std;

int main()
{
int n, Max;
cout<<"Enter Array Size: ";
cin>>n;
int *a= new int[n];

cout<<"Enter Array Elements: ";
for(int i=0;i<n;i++)
{
cin>>a[i];
}

Max=*a;

for(int i=0;i<n;i++)
{
if(Max<*(a+i))
{
Max=*(a+i);
}
}

cout<<"Highest Number: "<<Max;

return 0;
}
