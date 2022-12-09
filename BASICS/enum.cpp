// Enum data type
// Enumeration or Enum in C is a special kind of data type defined by the user. It consists of constant integrals or integers that are given names by a user.
// The use of enum in C to name the integer values makes the entire program easy to learn, understand, and maintain by the same or even different programmer.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
    meal m1 = breakfast;
    cout << m1 << endl;
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;
    return 0;
}
// Terminal
// 0
// 0
// 1
// 2
