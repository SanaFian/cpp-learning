// Exercise 1 :
// Write a program that accepts two integers and checks whether they are equal.

#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Input the values for Number1 and Number2 :";
    cin >> num1 >> num2;
    if (num1 == num2)
    {
        cout << "Number1 and Number2 are equal";
    }
    else
    {
        cout << "Number1 and Number2 are not equal";
    }
}
