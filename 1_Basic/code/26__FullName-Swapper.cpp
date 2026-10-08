// Exercise 26 :
// Write a program that takes the user's first and last name as input and prints the last name first, followed by the first name.

# include <iostream>
# include <string>
using namespace std;
int main()

{
char fname[30], lname [30];
 cout << "\n\n Print the name in reverse where last name comes first:\n";
 cout << "-----------------------------------------------------------\n";
cout << " Input First Name: ";
cin >> fname;
cout << " Input Last Name: ";
cin >> lname;

cout << " Name in reverse is: "<< lname << " "<< fname <<endl;
	cout << endl;
return 0;
}
