// Ambiguity resolution
#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    void greet()
    {
        cout << "Kaise ho??" << endl;
    }
};
class B
{
public:
    void greet()
    {
        cout << "Aur sab badia??" << endl;
    }
};
class C : public A, public B
{
public:
    void greet()
    {
        B ::greet();
    }
};
int main()
{
    B b;
    b.greet();
    return 0;
}
// Terminal
// Aur sab badia??