// Exercise 21 :
// Write a program that calculates the area and perimeter of a square.

#include<iostream>
#define PI 3.141
using namespace std;
int main()
{
  int side, area, perimeter;
   cout << "Enter the Length of Side : ";
   cin >> side;
   
  // Formula to calculate area, perimeter of square
   area = side * side;
   perimeter = 4 * side;

   cout << "Area of Square is : "<< area << " and perimeter is " << perimeter;
   
   return 0;
}
