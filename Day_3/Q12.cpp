#include<iostream>
using namespace std;
int main()
{
int a,b,x,y,t;
cin>>a>>b;
x=a;
y=b;
while(y)
{
t=y;
y=x%y;
x=t;
}
cout<<(a*b)/x;
return 0;
}