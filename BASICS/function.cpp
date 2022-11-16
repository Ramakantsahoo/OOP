// Functions
#include <bits/stdc++.h>
using namespace std;

int sum(int, int);
void g()
{
    cout << "gm" << endl;
}
int main()
{
    int num1 = 8;
    int num2 = 9;
    g();
    cout << sum(num1, num2); // Here num1 and num2 are actual parameters
}
int sum(int a, int b)
{
    // Here a and b are formal parameters
    int c = a + b;
    return c;
}
// Terminal
// gm
// 17