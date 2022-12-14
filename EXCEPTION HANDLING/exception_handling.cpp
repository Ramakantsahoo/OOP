// One of the advantages of c++ over c is exception handling
// Exceptions are run time abnormalities that a program encounter's during execution.
// There are two types of exception's :-
// 1.Synchronous
// 2.Asynchronous
//  C++ provides the following specialized keywords for this purpose:
// try: Represents a block of code that can throw an exception.
// catch: Represents a block of code that is executed when a particular exception is thrown.
// throw: Used to throw an exception. Also used to list the exceptions that a function throws but doesn’t handle itself.

// Why Exception Handling?
// 1) Separation of Error Handling code from Normal Code
// 2) Functions/Methods can handle only the exceptions they choose
// 3) Grouping of Error Types

#include <iostream>
using namespace std;
int main()
{
    int x = -5;
    cout << "Before try." << endl;
    try
    {
        cout << "Inside try." << endl;
        if (x < 0)
        {
            throw x;
            cout << "After throw (Never executed.)" << endl;
        }
    }
    catch (int x)
    {
        cout << "Exception caught " << x << endl;
    }
    cout << "After catch (Will be executed)" << endl;
    return 0;
}
// Terminal
// Before try.
// Inside try.
// Exception caught -5
// After catch (Will be executed)
