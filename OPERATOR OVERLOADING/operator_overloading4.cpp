// Q.Write a program to overload increment operator '++' using member function.
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
    void operator++(void)
    {
        a = ++a;
        b = ++b;
        c = ++c;
    }
};
int main()
{
    Numbers n(3, 5, 6);
    n.display();
    cout << endl;
    ++n;
    n.display();
    return 0;
}
// Terminal
// 3
// 5
// 6

// 4
// 6
// 7