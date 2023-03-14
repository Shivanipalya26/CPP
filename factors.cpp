#include<iostream>
using namespace std;

int main()
{
    int n,i,sum=0;
    cout<<"Enter no. for finding its factors:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" is a factor"<<endl;
        }

        //For calculating sum of factors
        /*if(n%i==0)
        {
             sum+=i;
            cout<<sum;
        }*/
    
    }
}