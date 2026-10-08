// Exercise 20 :
// Write a program that calculates the area and circumference of a circle.

#include<iostream>
#define PI 3.141
using namespace std;
int main()
{
    float radius, area, perimeter;
    cout << "Enter Radius: ";
    
    cin >> radius;
    area = PI * radius * radius;
	perimeter = 2 * PI * radius;
    
    cout << "area of circle is " << area << " and perimeter is " << perimeter;
    return 0;
}
