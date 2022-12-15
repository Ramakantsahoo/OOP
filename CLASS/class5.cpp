// Complex sum
#include <bits/stdc++.h>
using namespace std;
class complexx
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    complexx sumofcomplex(complexx z1, complexx z2)
    {
        complexx z3;
        z3.a = z1.a + z2.a;
        z3.b = z1.b + z2.b;
        return z3;
    }
    void display()
    {
        cout << "The sum is: " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complexx c1, c2, c3, c4;
    c1.setdata(2, 3);
    c1.display();
    c2.setdata(3, 3);
    c2.display();
    c4 = c3.sumofcomplex(c1, c2);
    c4.display();
    return 0;
}
// Terminal
// The sum is: 2 + 3i
// The sum is: 3 + 3i
// The sum is: 5 + 6i
