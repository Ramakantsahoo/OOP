// Memory allocation
// Arrays
#include <bits/stdc++.h>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter()
    {
        counter = 1;
    }
    void input();
    void display();
};
void shop ::input()
{
    cout << "Enter the item Id: ";
    cin >> itemid[counter];
    cout << "Enter the item price: ";
    cin >> itemprice[counter];
    counter++;
}
void shop ::display()
{
    for (int i = 1; i <= counter; i++)
    {
        cout << itemid[i] << " has price " << itemprice[i] << endl;
    }
}
int main()
{
    shop s;
    s.initcounter();
    s.input();
    s.input();
    s.input();
    s.display();
    return 0;
}
// Terminal
// Enter the item Id: 1
// Enter the item price: 10
// Enter the item Id: 12
// Enter the item price: 32
// Enter the item Id: 12
// Enter the item price: 23
// 1 has price 10
// 12 has price 32
// 12 has price 23