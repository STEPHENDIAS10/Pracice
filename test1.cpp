#include<iostream>
using namespace std;

int main()
{
int t1,denom,a,ct;

cin>>t1;
while(t1--)
{
cin>>denom;
a=1,ct=0;
while(denom>0)
{
denom-=a;
a=a +1;
ct++;
}
cout<<ct<<"\n";
}

return 0;
}
