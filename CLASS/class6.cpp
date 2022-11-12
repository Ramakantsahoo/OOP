// Friend function use
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    friend Complex sumofcomplex(Complex, Complex);
    void display()
    {
        cout << "The complex no. is: " << a << " + " << b << "i" << endl;
    }
};
Complex sumofcomplex(Complex c1, Complex c2)
{
    Complex c3;
    c3.setdata((c1.a + c2.a), (c1.b + c2.b));
    return c3;
}

int main()
{
    Complex c1, c2, c3;
    c1.setdata(2, 5);
    c1.display();
    c2.setdata(3, 4);
    c2.display();
    c3 = sumofcomplex(c1, c2);
    c3.display();
    return 0;
}
// Terminal
// The complex no. is: 2 + 5i
// The complex no. is: 3 + 4i
// The complex no. is: 5 + 9i