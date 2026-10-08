// Exercise 27 :
// Write a program that calculates the sum of two given integers and counts the number of digits in that sum.

#include <iostream>
#include <sstream>
using namespace std;
int main() {
    int x, y;
    while (cin >> x >> y) {
        stringstream str1;
        str1 << x + y;
        cout << str1.str().size() << endl;
	}
    return 0;
}
