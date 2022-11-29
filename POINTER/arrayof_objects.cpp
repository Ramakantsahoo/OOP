#include <bits/stdc++.h>
using namespace std;
class items
{
    int id;
    int price;

public:
    void input(int x, int y)
    {
        id = x;
        price = y;
    }
    void display()
    {
        cout << "Id: " << id << endl;
        cout << "Price: " << price << endl;
    }
};
int main()
{
    int size = 3;
    items *ptr = new items[size];
    items *tempptr = ptr;
    int p, q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter id and price of item " << i + 1 << endl;
        cin >> p >> q;
        ptr->input(p, q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Item no.: " << i + 1 << endl;
        tempptr->display();
        tempptr++;
    }
    return 0;
}
// Terminal
// Enter id and price of item 1
// 1 10
// Enter id and price of item 2
// 2 20
// Enter id and price of item 3
// 3 30
// Item no.: 1
// Id: 1
// Price: 10
// Item no.: 2
// Id: 2
// Price: 20
// Item no.: 3
// Id: 3
// Price: 30