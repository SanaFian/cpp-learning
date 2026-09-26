#include <iostream>
#define MAX_SIZE 100 //Maximum size of the array
using namespace std;
 
int main()
{
    int arr[MAX_SIZE];
    int i, num, sum=0;
 
    //Reads size and elements in array
    cout<<"Enter size of the array: ";
    cin>>num;
    cout<<"Enter "<<num<< "elements in the array: "<<endl;
 
    for(i=0; i<num; i++)
    {
        cin>>arr[i];
    }
    //Adding all elements
    for(i=0; i<num; i++)
    {
        sum = sum + arr[i]; // Calculating sum
    }
   cout<<"Sum of all elements of array: "<< sum;
 
    return 0;
}
