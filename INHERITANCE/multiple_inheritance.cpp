// Write a program create two base classes which will take OOP theory and OOP lab mark as input and make a derived class which will display total mark of OOP.

#include <bits/stdc++.h>
using namespace std;
class OOP_TM
{
public:
    float tm;
    void input()
    {
        cout << "Theory mark: ";
        cin >> tm;
    }
};
class OOP_LM
{
public:
    float lm;
    void input()
    {
        cout << "Lab mark: ";
        cin >> lm;
    }
};
class Total : public OOP_TM, public OOP_LM
{
public:
    float total;
    void display()
    {
        cout << "Therory mark: " << tm << endl;
        cout << "Lab mark: " << lm << endl;
        cout << "Total mark: " << tm + lm << endl;
    }
};
int main()
{
    Total t;
    t.OOP_TM ::input();
    t.OOP_LM ::input();
    t.display();
    return 0;
}
// Terminal
// Theory mark: 95
// Lab mark: 100
// Therory mark: 95
// Lab mark: 100
// Total mark: 195
