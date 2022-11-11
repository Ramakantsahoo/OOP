// Complex sum
#include<bits/stdc++.h>
using namespace std;
class complexx{
    int a,b;
    public:
        void setdata(int v1,int v2){
            a=v1;
            b=v2;
        }
        
        void sumofcomplex(complexx z1,complexx z2){
            complexx z3;
            z3.setdata((z1.a+z2.a),(z1.b+z2.b));
            
        }
        void display(){
            cout<<a<<"+"<<b<<"i"<<endl;
        }
};

int main() {
    complexx c1,c2,c3;
    c1.setdata(2,3);
    c1.display();
    c2.setdata(3,3);
    c2.display();
    c3.sumofcomplex(c1,c2);
    c3.display();
    return 0;
}