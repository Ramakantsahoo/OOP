#include<bits/stdc++.h>
using namespace std;
int ctr=0;
class a{
    int x;
    
    public:
        a(){
            ctr++;
            cout<<"constructor: "<<ctr<<endl;
        }
        ~a(){
            cout<<"destroctror: "<<ctr<<endl;
            ctr--;
        }
};
int main() {
    a a1;
    {
        a a2,a3;
    }
    return 0;
}
// Destorctor takes no arguments and also returns nothing
// Their is a default destroctor in compiler
// Terminal
// constructor: 1
// constructor: 2
// constructor: 3
// destroctror: 3
// destroctror: 2
// destroctror: 1