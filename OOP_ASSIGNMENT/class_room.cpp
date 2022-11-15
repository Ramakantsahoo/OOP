//  Design a class room having data members height ,width ,and length. Calculate the area and volume of the room.Use constructor for initialization of data members.
// Use copyconstructor for calculating the area of two similar rooms.
#include<bits/stdc++.h>
using namespace std;
class room{
    float height;
    float width;
    float length;
    public:
        room(float a,float b,float c){
            length=a;
            width=b;
            height=c;
        }
        room(room &r){
            height=r.height;
            length=r.length;
            width=r.width;
        }
        void area(){
            cout<<"Area: "<<float(length)*float(width)<<endl;
        }
        void volume(){
            cout<<"Volume: "<<float(length)*float(width)*float(height)<<endl;
        }
};
int main() {
    room r1(67.4,21,12.5);
    r1.area();
    r1.volume();
    room r2(r1);
    r2.area();
    r2.volume();
    return 0;
}
// Terminal
// Area: 1415.4
// Volume: 17692.5
// Area: 1415.4
// Volume: 17692.5
