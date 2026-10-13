// Exercise 27 :
// Write a program that shifts an array to the left.

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
    cout<<"Enter number of times to left rotate: ";
    cin>>num;
 
    // Actual rotation
    num = num % size;
 
    // Printing array before rotation
    cout<<"Array before rotationn:\n "<<endl;
    printArray(arr);
 
    // Rotating array n times
    for(i=1; i<=num; i++)
    {
        rotateByOne(arr);
    }
 
    // Printing array after rotation
    cout<<"\nArray after rotation: "<<endl;
    printArray(arr);
 
    return 0;
}
 
void rotateByOne(int arr[])
{
    int i, first;
 
    // Storing first element of array
    first = arr[0];
 
    for(i=0; i<size-1; i++)
    {
        // Moving each array element to its left
        arr[i] = arr[i + 1];
    }
 
    // Copying the first element of array to last
    arr[size-1] = first;
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
