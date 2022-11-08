// Define a class student having attributes name and roll no..Derive a class test having mark of two subjects.Derive a class sport from student class having attributes to store sports mark.Derive a class result from test and sport to calculate total marks and average. Do this problem using virtual base class.
#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    char name[30];
    int roll;
    void input()
    {
        cout << "Name: ";
        cin >> name;
        cout << "Roll no.: ";
        cin >> roll;
    }
};
class Test : virtual public student
{
public:
    float m1, m2;
    void input()
    {
        cout << "Enter marks of two subjects: ";
        cin >> m1 >> m2;
    }
};
class Sports :virtual public student
{
public:
    float sports_mark;
    void input()
    {
        cout << "Enter sports mark: ";
        cin >> sports_mark;
    }
};
class result : public Test, public Sports
{
public:
    float avg;
    float total;
    void clc()
    {
        avg = (m1 + m2 + sports_mark) / 3;
        total = m1 + m2 + sports_mark;
    }
    void display()
    {
        clc();
        cout << "The marks of two subjects and sports marks are " << m1 << " " << m2 << " " << sports_mark << " respectivly" << endl;
        cout << "The total mark is: " << total << endl;
        cout << "The average mark is: " << avg << endl;
    }
};
int main()
{
    result r;
    r.student ::input();
    r.Test ::input();
    r.Sports ::input();
    r.display();
    return 0;
}
// Terminal
// Name: rk
// Roll no.: 2102041050
// Enter marks of two subjects: 30 40
// Enter sports mark: 30
// The marks of two subjects and sports marks are 30 40 30 respectivly
// The total mark is: 100
// The average mark is: 33.3333