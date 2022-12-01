// Pointers to derived class
#include <bits/stdc++.h>
using namespace std;
class BaseClass
{
public:
    int num1;
    void display()
    {
        cout << num1 << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int num2;
    void display()
    {
        cout << num1 << endl;
        cout << num2 << endl;
    }
};
int main()
{
    BaseClass *bp;
    BaseClass b;
    DerivedClass d;
    bp = &d; // Base class pointer points to the derived class object
    bp->num1 = 4;
    // bp->num2 =5; // Error messege
    bp->display();
    DerivedClass *dp;
    dp = &d; // Derived class pointer points to the derived class object
    dp->num2 = 56;
    dp->num1 = 6;
    dp->display();
    return 0;
}
// Terminal
// 4
// 6
// 56