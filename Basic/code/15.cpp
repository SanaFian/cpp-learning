#include<iostream>
using namespace std;
int main()
{
     float celsius, fahrenheit;
    
     cout << "Enter Temperature in Celsius : ";
     cin >> celsius;
    
     fahrenheit = (1.8 * celsius) + 32; // Formula to caltulate Celsius to Fahrenheit
     cout << "Temperature in Fahrenheit : " << fahrenheit;
    
     return 0;
}
