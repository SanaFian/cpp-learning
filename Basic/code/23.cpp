#include<iostream>
#define PI 3.141
using namespace std;
int main()
{
   int base, height, area, perimeter;
   cout << "Enter base of triangle : ";
   cin >> base;
   
   cout << "Enter height of triangle : ";
   cin >> height;

   // Formula to calculate area, perimeter of triangle
   area = (base * height) / 2;
   perimeter = (base) * 3;

   cout << "Area of triangle is : " << area << " and perimeter is " << perimeter;
   
   return 0;
}
