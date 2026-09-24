#include<iostream>
#define PI 3.141
using namespace std;
int main()
{
   int length, breadth, area, perimeter;
   cout << "Enter length of rectangle : ";
   cin >> length;
   
   cout << "Enter breadth of rectangle : ";
   cin >> breadth;
   // Formula to calculate area, perimeter of Rectangle
   area = length * breadth;
   perimeter = (length + breadth) * 2;

   cout << "Area of rectangle is : " << area << " and perimeter is " << perimeter;
   
   return 0;
}
