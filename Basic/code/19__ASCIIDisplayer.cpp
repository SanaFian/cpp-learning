// Exercise 19 :
// Write a program that displays the ASCII code of a value.

#include<iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << "ASCII Value of " << c << " is " << int(c);
    return 0;
}
