#include<iostream>
using namespace std;

int main()
{
    int i,n,sum = 0;
    cout << "Enter a num:";
    cin >> n;
    for(i = 1;i < n;i++)
    {
        if(n % i == 0)
        {
            sum += i;
        }
    }
    if(sum == n)
    {
        cout << "It is a perfect number";
    }
    else
    {
        cout << "It is not a perfect number";
    }
}