#include<iostream>
using namespace std;

int main()
{
    int n,i,fac=1;
    cout<<"Enter no. for calculating factorial:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fac*=i;
    }
    cout<<"Factorial is "<<fac;
}