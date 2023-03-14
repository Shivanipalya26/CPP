#include<iostream>
using namespace std;

int main()
{
    int i,n,r,rev = 0;
    cout<<"Enter a num:";
    cin>>n;
    while(n != 0)
    {
        r = n % 10;
        n /= 10;
        rev = rev * 10 + r;
    }
    cout<<"Reverse of given is "<<rev;
    return 0;
}