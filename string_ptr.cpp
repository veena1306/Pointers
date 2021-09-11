/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    char s1[] = "abc";
   // char s2[3] = "abc"; // main.cpp:16:18: error: initializer-string for array of chars is too long [-fpermissive]
    char s3[50] = "abc";
    const char* s4 = "abc";
    char *s5 = new char[3]{'a','b','c'};
    cout << s1 << " " << s3 <<" "<<s4 <<" "<< s5 << endl;

    string s8 = "veena";
    cout << s8 << endl;
    
}
