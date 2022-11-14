#include<bits/stdc++.h>
using namespace std;
class B;
class A{
    int a;
    public:
        void setdata(int x){
            a=x;
        }
        friend void sum(A,B);
};
class B{
    int b;
    public:
        void setdata(int y){
            b=y;
        }
        friend void sum(A,B);
};
void sum(A m,B n){
    cout<<"The sum is: "<<m.a+n.b<<endl;
}

int main() {
    A m;
    B n;
    m.setdata(6);
    n.setdata(5);
    sum(m,n);
    return 0;
}
// Terminal
// The sum is: 11