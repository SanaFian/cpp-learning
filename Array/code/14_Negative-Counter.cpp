// Exercise 14 :
// Write a program that finds the total number of negative elements in an array.

#include <iostream>
#define MAX_SIZE 100 //Maximum size of the array
using namespace std;
 
int main()
{
   int arr[100]; //Declaring size of an array as 100
   int i, num, count=0;
 
    //Reads size and elements of array
 
    cout<<"Enter size of the array : ";
    cin>>num;
 
    cout<<"Enter elements in array : ";
    for(i=0; i<num; i++)
    {
        cin>>arr[i];
    }
 
    //Counts total number of negative elements
    for(i=0; i<num; i++)
    {
        if(arr[i]<0)
        {
            count++; //couting negative elements
        }
    }
    cout<<"Total number of negative elements: "<<count;
 
    return 0;
}
