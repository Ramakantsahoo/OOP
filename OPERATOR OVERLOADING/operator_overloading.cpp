// Operator overloading
// Q.Write a program to add two or more complex numbers using operator overloading.
#include <bits/stdc++.h>
using namespace std;
class Complex
{
public:
    int real, imaginary;
    Complex() {}
    Complex(int x, int y)
    {
        real = x;
        imaginary = y;
    }
    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
};
int main()
{
    Complex c1(2, 3);
    Complex c2(4, 5);
    c1.display();
    c2.display();
    Complex c3(4, 6), c4;
    c4 = c1 + c2 + c3;
    c3.display();
    c4.display();
    return 0;
}
// Terminal
// 2 + 3i
// 4 + 5i
// 4 + 6i
// 10 + 14i
