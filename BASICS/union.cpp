// Union
#include <bits/stdc++.h>
using namespace std;
union money
{
    /* data */
    int car;
    int potato;
    int onion;
};

int main()
{
    union money m;
    m.car = 45;
    m.onion = 9;
    cout<<m.car<<endl;
    cout << m.onion << endl;
    return 0;
}
// Terminal
// 9
// 9
