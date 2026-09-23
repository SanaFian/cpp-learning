#include<iostream>
using namespace std;    
int main() 
{
    int num1, num2;
    int sum, sub, mult, mod;
    float div;
    cout<< "Enter first number : ";
    cin >> num1;
    
    cout<< "Enter second number : ";
    cin >> num2;
    
    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    mod = num1 % num2;
    div = (float)num1 / num2;
    cout << "Sum of number1 and number2 : " << sum << endl;
    cout << "Difference of number1 and number2 : " << sub << endl;
    cout << "Product of number1 and number2 : " << mult << endl;
    cout << "Modulus of number1 and number2 : " << mod << endl;
    cout << "Quotient of number1 and number2 : " << div << endl;
    
    return 0;
}
