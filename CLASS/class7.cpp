// Sum of real part of complex number using Friend function.
#include <bits/stdc++.h>
using namespace std;
// Forward declaration
class Complex;
class calculator
{
public:
    int sumofrealcomplex(Complex o1, Complex o2);
};
class Complex
{
    int a;
    int b;
    friend class calculator;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "Your no. is: " << a << " + " << b << "i" << endl;
    }
};
int calculator ::sumofrealcomplex(Complex o1, Complex o2)
{
    return ((o1.a + o2.a));
}

int main()
{
    Complex c1, c2, c3;
    c1.setdata(2, 7);
    c1.display();
    c2.setdata(1, 3);
    c2.display();
    int res;
    calculator cal;
    res = cal.sumofrealcomplex(c1, c2);
    cout << res << endl;

    return 0;
}
// Terminal
// Your no. is: 2 + 7i
// Your no. is: 1 + 3i
// 3