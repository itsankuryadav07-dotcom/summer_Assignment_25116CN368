#include<iostream>
using namespace std;
int main()
{
int a,b,i,j;
cin>>a>>b;
for(i=a;i<=b;i++)
{
if(i<=1)continue;
bool p=true;
for(j=2;j*j<=i;j++)
{
if(i%j==0){
p=false;
break;
}
}
if(p)cout<<i<<" ";
}
return 0;
}