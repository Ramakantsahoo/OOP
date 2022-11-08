// Q.Write a program to overload unary operator '-' using member function.(If data type is not mentioned,overload it for an object).Using member function.
#include <bits/stdc++.h>
using namespace std;
class Numbers
{
    int a, b, c;

public:
    Numbers() {}
    Numbers(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << a << " " << b << " " << c << endl;
    }
    void operator-()
    {
        a = -a;
        b = -b;
        c = -c;
    }
};
int main()
{
    Numbers n(2, 4, 5);
    n.display();
    -n;
    n.display();
    return 0;
}
// Terminal
// 2 4 5
// -2 -4 -5