// Exercise 13 :
// Write a program that prints all the negative elements in an array.

#include <iostream>
#define MAX_SIZE 100 //Maximum size of the array
using namespace std;
 
int main()
{
    int arr[MAX_SIZE]; //Declares an array size
    int i, num;
 
    //Enter size of array
    cout<<"Enter size of the array: ";
    cin>>num;
 
    //Reading elements of array
    cout<<"Enter elements in array: ";
    for(i=0; i<num; i++)
    {
        cin>>arr[i];
    }
 
    cout<<"All negative elements in array are:";
    for(i=0; i<num; i++)
    {
        //Printing negative elements
        if(arr[i] < 0)
        {
            cout<<arr[i];
        }
    }
 
    return 0;
}
