#include<iostream>
using namespace std;

class Student
{
    private:
        int roll;
        string name;
        int math_mark;
        int chem_mark;
        int phy_mark;
        int avg;
    public:
        Student(int r,string n,int m,int c,int p)
        {
            roll = r;
            name = n;
            math_mark = m;
            chem_mark = c;
            phy_mark = p;
        }
        int total()
        {
            return math_mark + chem_mark + phy_mark;
        }
        char grade()
        {
            avg = (math_mark + chem_mark + phy_mark) / 3;
            if(avg < 40)
                return 'C';
            else if(avg > 40 && avg < 60)
                return 'B';
            else
                return 'A';
        }
};

int main()
{
    int roll;
    string name;
    int m;
    int c;
    int p;

    cout << "Enter details of student " << endl;
    cout << "\nEnter name : ";
    cin >> name;
    cout << "Enter roll number : ";
    cin >> roll;
    cout << "Enter marks of maths, chemistry, physics :: ";
    cin >> m >> c >> p;

    Student s(roll, name, m, c, p);
    cout << "\nTotal marks = " << s.total() << endl;
    cout << "Grade of student : " << s.grade();

    return 0;
}
