#include<bits/stdc++.h>
#include<math.h>
using namespace std;
class point{
    int x,y;
    public:
        point(int a,int b){
            x=a;
            y=b;
        }
        void display(){
            cout<<"Your point is: "<<"( "<<x<<" , "<<y<<" )"<<endl;
        }
        friend int distance(point ,point);
};
int distance(point p1,point p2){
    return (sqrt(((p2.x-p1.x)*(p2.x-p1.x))+((p2.y-p1.y)*(p2.y-p1.y))));
}
int main() {
    point p1(3,4);
    p1.display();
    point p2(6,8);
    p2.display();
    cout<<"The distance between two points is: "<<distance(p1,p2);
    return 0;
}
// Terminal
// Your point is: ( 3 , 4 )
// Your point is: ( 6 , 8 )
// The distance between two points is: 5