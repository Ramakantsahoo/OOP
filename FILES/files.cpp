#include <iostream>
#include <fstream> // For files
using namespace std;
/*
The useful classes for working with files in c++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/
// In order to work with files in C++, You will have to open it, there are two ways to open a file :
// 1. Using the constructor
// 2. Using the member function open() of the class
int main()
{
    // Opening files using constructor and writing it
    string s1 = "hehe"; 
    ofstream out("sample1.txt"); // Writing operation
    out << s1;
    // Opening files using constructor and reading it
    string s2;
    ifstream in("sample2.txt"); // Read operation
    getline(in, s2);
    cout << s2 << endl;
    return 0;
}
// Terminal
// I can do it.
