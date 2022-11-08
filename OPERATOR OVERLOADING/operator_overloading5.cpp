// Q.Write a program to overload increment operator '++' using friend function.
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
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
    friend Numbers operator++(Numbers);
};
Numbers operator++(Numbers n1)
{
    Numbers n2;
    n2.a = ++n1.a;
    n2.b = ++n1.b;
    n2.c = ++n1.c;
    return n2;
}
int main()
{
    Numbers n(3, 5, 66);
    n.display();
    Numbers n1;
    cout << endl;
    n1 = ++n;
    n1.display();
    return 0;
}
// Terminal
// 3
// 5
// 66

// 4
// 6
// 67