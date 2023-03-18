//using getline() to take a string

#include<iostream>
using namespace std;
int main()
{
    string name;
    cout << "May I know your name" << endl;
    getline(cin, name);
    cout << "Hello Mr./Mrs. " << name;
    return 0;
}