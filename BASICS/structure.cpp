//  Structures are a way to group several related variables into one place //Structures are userdefined datatype.
// Each variable is known as a member of the structure.structure can contain many diff. variables
#include <iostream>
using namespace std;
// struct employee
// {
//     int eid;
//     char efavchar;
//     float salary;

// };
// int main(){
//     struct employee rk;
//     struct employee rohon;
//     rk.eid=1234;
//     rk.salary=546843141;
//     rk.efavchar='4';

// }
struct employee
{
    int eid;
    char efavchar;
    float salary;
};
int main()
{
    // ep rk;
    // ep rohon;
    employee rk;
    rk.eid = 1234;
    rk.salary = 546843141;
    rk.efavchar = '4';
    cout << rk.eid << endl;
    cout << rk.salary << endl;
    cout << rk.efavchar << endl;
}
// structure in c++ is typedefed
// Terminal
// 1234
// 5.46843e+008
// 4