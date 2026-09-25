#include<iostream>
using namespace std;
int main()
{
    int days, years, weeks;
    cout << "Enter days:";   // Read total number of days from user
    cin >> days;
    
    years = (days / 365);
    weeks = (days % 365) / 7;
    days  = days - ((years * 365) + (weeks * 7));
    cout << "Years : " << years <<endl;
    cout << "weeks : " << weeks <<endl; 
    cout << "Days : " << days <<endl;
    
    return 0;
}
