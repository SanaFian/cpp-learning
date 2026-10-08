// Exercise 10 :
// Write a program that swaps the values ​​of two variables (without using a third variable).

EX 10

#include <iostream>

using namespace std;

int main(){

    int a = 7;
    int b = 2;

    a = a+b;
    b = a-b;
    a = a-b;

    cout << "a is: " << a << " b is: " << b << endl;
    return 0;
}
