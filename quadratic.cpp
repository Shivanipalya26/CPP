//find roots of quadratic equation

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float r1,r2,d;
    int a,b,c;
    cout << "Enter a,b,c::";
    cin >> a >> b >> c;
    d = (b * b) - (4 * a * c);
    if(d > 0)
    {
        r1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);    
        r2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a); 
        cout << "Roots are " << r1 << "\t" << r2;
    }
    else
    {
        cout << "Invalid";
    }       
    return 0;
}
