#include<iostream>
using namespace std;
int fact(int n)
{
int f=1;
for(int i=1;i<=n;i++)f*=i;
return f;
}
int main()
{
int n,t,sum=0;cin>>n;
t=n;
while(t)
{
sum+=fact(t%10);
t/=10;
}
cout<<(sum==n?"Strong Number":"Not a Strong Number");
}