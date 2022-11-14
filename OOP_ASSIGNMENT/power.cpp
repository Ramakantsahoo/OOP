// write a function power (use default value of exponent 2).
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
class powerr
{
    double base;
    int exponent;

public:
    powerr()
    {
        cout << "Enter the base: ";
        cin >> base;
        cout << "Enter the exponent: ";
        cin >> exponent;
    }
    powerr(double x, int y = 2)
    {
        base = x;
        exponent = y;
    }
    void display()
    {
        cout << "Base: " << base << endl
             << "Exponent: " << exponent << endl
             << "Power: " << pow(base, exponent) << endl;
    }
};
int main()
{
    powerr p;
    p.display();
    powerr p1(3, 3);
    p1.display();
    powerr p2(5);
    p2.display();
    return 0;
}
// Terminal
// Enter the base: 2
// Enter the exponent: 3
// Base: 2
// Exponent: 3
// Power: 8
// Base: 3
// Exponent: 3
// Power: 27
// Base: 5
// Exponent: 2
// Power: 25