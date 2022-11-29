// Constructor initialization
#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int a, b;
    // Here as a is decalred first so a has to be initialised first.
    A(int x, int y) : a(x), b(y)
                  //: initialization section 
    {
        cout << "Value of a is: " << a << endl;
        cout << "Value of b is: " << b << endl;
    }
};
int main()
{
    A a(2, 3);
    return 0;
}
// Terminal
// Value of a is: 2
// Value of b is: 3