#include<iostream>
using namespace std;

int main()
{
    int r,n,sum=0,m;
    cout<<"Enter num:";
    cin>>n;
    m=n;
    for(;n!=0;)
    {
        r=n%10;
        n/=10;
        sum=sum+r*r*r;
    }
    if(m==sum)
    {
        cout<<"Entered number is armstrong number";
    }
    else cout<<"Entered number is not an amrstrong number";
}