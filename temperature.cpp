//To convert temperature from fahrenheit to celsius and vice versa

#include<iostream>
using namespace std;
int main()
{
    int c;
    float a,b;
    cout<<"Temperature from Fahrenheit to celsius [Press 1]"<<endl;
    cout<<"Temperature from Celsius to Fahrenheit[Press 2]"<<endl;
    cout<<"\nEnter your choice"<<endl;
    cin>>c;
    if(c==1)
    {
        cout<<"Enter temperature in fahrenheit:"<<endl;
        cin>>a;
        b=(5*(a-32))/9;
        cout<<"Temperature in celsius is "<<b;
        return 0;
    }
    else
    {
        cout<<"Enter temperature in celsius:"<<endl;
        cin>>a;
        b=((9*a/5)+32);
        cout<<"Temperature in fahrenheit is "<<b;
        return 0;
    }
}    