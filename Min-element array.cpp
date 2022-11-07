#include<bits/stdc++.h>
using namespace std;

int main()
{
int n, small;
cout<<"Enter Array Size: ";
cin>>n;
int *a= new int[n];

cout<<"Enter Array Elements: ";
for(int i=0;i<n;i++)
{
cin>>a[i];
}

small=*a;

for(int i=0;i<n;i++)
{
if(small>*(a+i))
{
small=*(a+i);
}
}

cout<<"Smallest Number: "<<small;

return 0;
}
