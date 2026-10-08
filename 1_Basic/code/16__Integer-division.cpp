// Exercise 16 :
// Write a program that calculates the quotient and remainder of a number.


#include <iostream>
using namespace std;

    int main()
    {
    	int dividend, divisor, quotient,remainder;
		cout << "\n\n Compute quotient and remainder :\n";
		cout << "-------------------------------------\n";		
        cout<<" Input the dividend : ";
    	cin>>dividend;
        cout<<" Input the divisor : ";
    	cin>>divisor;
		quotient=dividend / divisor;
		remainder=dividend % divisor;
        cout<<" The quotient of the division is : "<< quotient << endl;
        cout<<" The remainder of the division is : "<< remainder << endl;
        cout << endl;
        return 0;
    }
