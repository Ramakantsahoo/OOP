// Postincrement operator overloading.Using member function.
#include<bits/stdc++.h>
using namespace std;
class Number{
    int a,b;
    public:
        Number(){}
        Number(int x,int y){
            a=x;
            b=y;
        }
        Number operator ++(int){
            Number temp;
            temp.a=a++;
            temp.b=b++;
            return temp;
        }
        void display(){
            cout<<a<<" "<<b<<endl;
        }
};
int main() {
    Number n(5,6),n2;
    n.display();
    n2=n++;
    n.display();
    return 0;
}
// Terminal
// 5 6
// 6 7