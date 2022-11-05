// Define a class student having attributes name and roll no..Derive a class test having mark of two subjects.Define a class sport having attributes to store sports 
// mark.Derive a class result from test and sport to calculate total marks and average.
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
class Test : public student
{
public:
    float m1, m2;
    void input()
    {
        cout << "Enter marks of two subjects: ";
        cin >> m1 >> m2;
    }
};
class Sports
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
// Name: Rk
// Roll no.: 2102041050
// Enter marks of two subjects: 90 50
// Enter sports mark: 80
// The marks of two subjects and sports marks are 90 50 80 respectivly
// The total mark is: 220
// The average mark is: 73.3333
