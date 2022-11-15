// Electricity board charges 60 paisa per unit for the first hundred units, 80 paisa per unit for next 200 units and 90 paisa per unit beyond 300 units.All the users
// are charged minimum of 50 and if the total amount is more than 300 then the additional surcharge of 15% is added.Write a program to read name & no. of units ,print 
// the charges with users name.
#include <bits/stdc++.h>
using namespace std;
class Electricity
{
    string name;
    float units;
    float bill;

public:
    Electricity()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the units of electricity used: ";
        cin >> units;
    }
    void display()
    {
        cout << "Name: " << name << endl
             << "Units: " << units << endl
             << "Bill: " << bill << endl;
    }
    void clc();
};
void Electricity ::clc()
{
    if (units < 100)
    {
        bill = units * 60;
        if (bill < 50 * 100)
        {
            bill = 50 * 100;
        }
    }
    else if (units < 300)
    {
        bill = 100 * 60 + (units - 100) * 80;
        if (bill < 50 * 100)
        {
            bill = 50 * 100;
        }
    }
    else if (units > 300)
    {
        bill = (100 * 60) + (200 * 80) + (units - 300) * 90;
        if (bill < 50 * 100)
        {
            bill = 50 * 100;
        }
    }
    bill = bill / 100;
}
int main()
{
    Electricity a;
    a.clc();
    a.display();
    return 0;
}
// Terminal
// Enter the name: Ramakant
// Enter the units of electricity used: 375
// Name: Ramakant
// Units: 375
// Bill: 287.5
