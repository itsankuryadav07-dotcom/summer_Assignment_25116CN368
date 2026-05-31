#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,t,r,sum=0,d=0;
    cin>>n;
    t=n;
    while(t)
    {
        d++;
        t/=10;
    }
    t=n;
    while(t)
    {
        r=t%10;
        sum+=pow(r,d);
        t/=10;
    }
    if(sum==n) cout<<"Armstrong";
    else cout<<"Not Armstrong";
    return 0;
}