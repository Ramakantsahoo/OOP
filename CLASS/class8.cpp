// Constructor
#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex()
    { // Default cunstructor
        a = 0;
        b = 0;
    }
    void display()
    {
        cout << "Your complex no. is: " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c;
    c.display();
    return 0;
}
// Terminal
// Your complex no. is: 0 + 0i