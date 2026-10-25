// Exercise 28 :
// Write a program that shifts an array to the right.

#include <iostream>
#define size 5 // defining Size of the array
using namespace std;
 
void printArray(int arr[]);
void rotateByOne(int arr[]);
 
int main()
{
    int i, num;
    int arr[size];
 
    cout<<"Enter 5 elements array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter number of times to right rotate: ";
    cin>>num;
 
    // Actual rotation
    num = num % size;
 
    // Printing array before rotation
    cout<<"Array before rotation\n"<<endl;
    printArray(arr);
 
    // Rotate array n times
    for(i=1; i<=num; i++)
    {
        rotateByOne(arr);
    }
 
    // Printing array after rotation
    cout<<"\nArray after rotation\n"<<endl;
    printArray(arr);
 
    return 0;
}
 
 
void rotateByOne(int arr[])
{
    int i, last;
 
    // Storing last element of array
    last = arr[size - 1];
 
    for(i=size-1; i>0; i--)
    {
        // Moving each array element to its right
        arr[i] = arr[i - 1];
    }
 
   // Copying last element of array to first
    arr[0] = last;
}
 
 
//Printing the given array
void printArray(int arr[])
{
    int i;
 
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
}
