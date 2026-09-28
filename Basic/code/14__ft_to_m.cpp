// Exercise 14 :
// Write a program that converts a value from feet to meters.

#include<iostream>
using namespace std;    
int main() 
{
    float meter,feet;
    cout<< "Enter feet : ";
    cin >> feet ;    
    meter = feet / 3.2808399;
    cout<< meter ;
    return 0;
}
