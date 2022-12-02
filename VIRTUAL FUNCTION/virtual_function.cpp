// Virtual function
#include <bits/stdc++.h>
using namespace std;
class Base_class
{
public:
    int a = 1;
    virtual void display()
    {
        cout << a << endl;
    }
};
class Derived_class : public Base_class
{
    int b = 2;

public:
    void display()
    {
        cout << a << endl;
        cout << b << endl;
    }
};
int main()
{
    Base_class *bp;
    Derived_class obj;
    bp = &obj;
    bp->display();
    return 0;
}
// Terminal
// 1
// 2
