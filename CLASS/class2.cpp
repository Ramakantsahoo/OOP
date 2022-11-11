// classess are extension of structure
#include <bits/stdc++.h>
#include <string>
using namespace std;

class binary
{
    string s;
    void chk_binary();

public:
    void read();
    void display();
    void ones_compliment();
};
void binary ::read()
{
    cout << "Enter the string: ";
    cin >> s;
}
void binary ::chk_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
            cout << "Not a binary string" << endl;
            break;
    }
}
void binary ::ones_compliment()
{
    chk_binary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
            s.at(i) = '0';
        else
            s.at(i) = '1';
    }
}
void binary ::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    binary b;
    b.read();
    b.display();
    cout << endl;
    b.ones_compliment();
    b.display();
    return 0;
}
// Terminal
// Enter the string: 011010
// 011010
// 100101