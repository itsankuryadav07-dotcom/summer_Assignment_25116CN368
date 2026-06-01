#include<iostream>
using namespace std;
int main()
{
long long n,p=-1;
cin>>n;
while(n%2==0)
{
    p=2;
    n/=2;
}
for(long long i=3;i*i<=n;i+=2)
while(n%i==0)
{
    p=i;
    n/=i;
}
if(n>2)
p=n;
cout<<p;
}