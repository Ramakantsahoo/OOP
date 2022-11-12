// constructor overloading
#include <bits/stdc++.h>
using namespace std;
class complexx
{
    int a, b;

public:
    complexx() {}
    complexx(int x, int y = 0)
    {
        a = x;
        b = y;
    }
    complexx(int x, int y, int z)
    {
        a = x;
        b = 9;
    }
    void display()
    {
        cout << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complexx c3(4);
    c3.display();
    complexx c1(4, 5);
    c1.display();
    complexx c2(6, 7, 8);
    c2.display();
    return 0;
}
// Terminal
// 4 + 0i
// 4 + 5i
// 6 + 9i