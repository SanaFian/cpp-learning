// Exercise 09:
// Write a program that swaps the values ​​of two variables (using a third variable).

#include <iostream>

using namespace std;

int main()
{
    int a = 7;
    int b = 2;
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "a is: " << a << " b is: " << b <<endl;
    return 0;
}
