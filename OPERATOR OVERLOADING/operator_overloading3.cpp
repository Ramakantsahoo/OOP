// Q.Write a program to overload unary operator '-' using member function.(If data type is not mentioned,overload it for an object).Using friend function.
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
    friend Numbers operator-(Numbers);
};
Numbers operator-(Numbers n1)
{
    Numbers n2;
    n2.a = -n1.a;
    n2.b = -n1.b;
    n2.c = -n1.c;
    return n2;
}
int main()
{
    Numbers n(2, 4, 5);
    n.display();
    Numbers n1;
    n1 = -n;
    n1.display();
    return 0;
}
// Terminal
// 2 4 5
// -2 -4 -5