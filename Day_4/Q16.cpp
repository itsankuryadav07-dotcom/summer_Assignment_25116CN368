#include<iostream>
#include<cmath>
using namespace std;

bool arm(int n)
{
    int t=n,r,sum=0,d=0;
    while(t){
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
    return sum==n;
}

int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        if(arm(i))
            cout<<i;
    return 0;
}