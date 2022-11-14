#include<bits/stdc++.h>
using namespace std;
class number{
    int a,b;
    public: 
        void setnum(int x,int y){
            a=x;
            b=y;
        }
        friend void summ(number);
};
void summ(number n){
    cout<<"The sum is: "<<(n.a+n.b)<<endl;
}
int main() {
    number num;
    num.setnum(5,6);
    summ(num);
    return 0;
}
// Terminal
// The sum is: 11