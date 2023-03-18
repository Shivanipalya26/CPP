// program for static variable

# include<iostream>
using namespace std;

void fun()
{
	static int s=10;        //this will remain in memory throughout the program
	s++;
	cout<<s<<endl;
}
int main()
{
	fun();
	fun();
}