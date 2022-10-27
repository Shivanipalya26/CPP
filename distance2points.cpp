//to calculate distance between 2 points
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float x1,x2,y1,y2,dis;
    cout<<"Enter values for x1,x2,y1,y2::";
    cin>>x1>>x2>>y1>>y2;
    dis=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    cout<<"Distance between two points are "<<dis;
}