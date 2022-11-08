// Q.Write a program to overload binary addition operator for adding two complex numbers using friend function.
#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int rl, img;

public:
    Complex() {}
    Complex(int x, int y)
    {
        rl = x;
        img = y;
    }
    void display()
    {
        cout << rl << " + " << img << "i" << endl;
    }
    friend Complex operator+(Complex, Complex);
};
Complex operator+(Complex c1, Complex c2)
{
    Complex c3;
    c3.rl = c1.rl + c2.rl;
    c3.img = c1.img + c2.img;
    return c3;
}
int main()
{
    Complex c1(4, 5), c2(0, 4);
    c1.display();
    c2.display();
    Complex c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}
// Terminal
// 4 + 5i
// 0 + 4i
// 4 + 9i