//to find whether the no. is even or odd 

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the no.:";
    cin>>num;
    if(num%2==0)
    {
        cout<<"It is even number";
    }
    else
    {
        cout<<"It is odd number";
    }
    return 0;
}