// Parameterized Constructor
#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x, int y)
    { // Parameterized cunstructor
        a = x;
        b = y;
    }
    void display()
    {
        cout << "Your complex no. is: " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    // Implicit call
    Complex c(4, 6);
    c.display();
    // Explicit call
    Complex b = Complex(5, 6);
    b.display();
    return 0;
}
// Terminal
// Your complex no. is: 4 + 6i
// Your complex no. is: 5 + 6i