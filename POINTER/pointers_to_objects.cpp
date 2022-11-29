// Pointers to objects
#include<bits/stdc++.h>
using namespace std;
class complexx{
    int a,b;
    public:
        complexx(){}
        complexx(int x,int y){
            a=x;
            b=y;
        }
        void display(){
            cout<<"The complex no. is: "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main() {
    // complexx c;
    // c=complexx(3,4); // Explicit call
    // complexx *ptr=&c;
    complexx *ptr=new complexx(4,5);
    // (*ptr).display(); is exactly same as
    ptr->display();
    return 0;
}
// Terminal
// The complex no. is: 4 + 5i