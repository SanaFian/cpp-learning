// Exercise 17 :
// Write a program that inserts an element into an array.

#include <iostream>
#define MAX_SIZE 100 //Maximum size of the array
using namespace std;
 
int main()
{
 
    int arr[100];
    int i, num, size, position;
 
    // Reading size and elements of array
    cout<<"Enter size of the array :";
    cin>>size;
    cout<<"Enter elements in array : ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
 
    //Reading element to insert & position of the element
 
    cout<<"Enter element to insert : ";
    cin>>num;
    cout<<"Enter the element position : ";
    cin>>position;
 
    //checking elements valis position
 
    if(position>size+1 || position<=0)
    {
        cout<<"Invalid position! Please enter position between 1 to "<<num;
    }
    else
    {
        //Inserting element in an array & increasing the size of the array
 
        for(i=size; i>=position; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[position-1] = num;
        size++;
 
         // Printing new array with new element
 
        cout<<"Array elements after insertion : ";
        for(i=0; i<size; i++)
        {
           cout<<arr[i]<<"\t";
        }
    }
 
    return 0;
}
