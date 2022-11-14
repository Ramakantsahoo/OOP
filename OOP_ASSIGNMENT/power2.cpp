// write a function power (use default value of exponent 2).use function/constructor overloading overloading .
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
class powerr
{
    double base;
    int exponent;

public:
    powerr() {}
    powerr(double x, int y = 2)
    {
        base = x;
        exponent = y;
    }
    powerr(int x, int y = 2)
    {
        base = x;
        exponent = y;
    }
    void display()
    {
        cout << base << " to the power " << exponent << " is: " << pow(base, exponent) << endl;
    }
};
int main()
{
    powerr p(2.3, 3);
    p.display();
    powerr p1(2, 3);
    p1.display();
}
// Terminal
// 2.3 to the power 3 is: 12.167
// 2 to the power 3 is: 8