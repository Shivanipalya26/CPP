//sum of n terms 

#include<iostream>
using namespace std;

int main()
{
    int n,sum;
    cout<<"Enter no. of terms for sum:";
    cin>>n;
    sum=(n*(n+1))/2;
    cout<<"Sum of n terms is "<<sum;
    return 0;
}