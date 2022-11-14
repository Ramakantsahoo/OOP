// Write a program to calculate simple interest and compound interest for a given principal amount and time period.
#include <bits/stdc++.h>
using namespace std;
class interest
{
    float pa;
    int time_mon;
    float si;
    float ci;
    float inr; // Per year
    int year;
    float rem;

public:
    interest()
    {
        cout << "Enter principal amount: ";
        cin >> pa;
        cout << "Enter the time period: ";
        cin >> time_mon;
        cout << "Enter interest percentage: ";
        cin >> inr;
    }
    void display()
    {
        cout << "Principal_amount: " << pa << endl;
        cout << "Time_period: " << time_mon << endl;
        cout << "Simple interest: " << si << endl;
        cout << "Compound interest: " << ci << endl;
    }
    void clc();
};
void interest ::clc()
{
    year = time_mon / 12;
    rem = float(time_mon % 12) / 12;
    si = pa * (inr / 1200) * time_mon;
    float temp = pa;
    for (int i = year; i > 0; i--)
    {
        temp += temp * (inr / 100);
    }
    temp = temp + temp * (inr / 100) * rem;
    ci = temp - pa;
}
int main()
{
    interest i;
    i.clc();
    i.display();
    return 0;
}
// Terminal
// Enter principal amount: 12000
// Enter the time period: 15
// Enter interest percentage: 5
// Principal_amount: 12000
// Time_period: 15
// Simple interest: 750
// Compound interest: 757.5