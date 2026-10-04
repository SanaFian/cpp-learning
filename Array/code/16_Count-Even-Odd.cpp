// Exercise 16 :
// Write a program that counts the even and odd elements in an array.

#include <iostream>
#define MAX_SIZE 100 //Maximum size of the array
using namespace std;
 
int main()
{
 
    int arr[MAX_SIZE];
    int i, num, evennum, oddnum;
 
    // Reads size and elements in array
    cout<<"Enter size of the array: ";
    cin>>num;
    cout<<"Enter "<<num<<" elements in array: ";
    for(i=0; i<num; i++)
    {
        cin>>arr[i];
    }
 
    evennum = 0; // Assuming 0 even numbers
    oddnum  = 0; // Assuming 0 odd numbers
 
    for(i=0; i<num; i++)
    {
        /* If the current element of array is evennumber then increment evennumber count */
        if(arr[i]%2 == 0)
        {
            evennum++;
        }
        else
        {
            oddnum++; // increment oddnumber count
        }
    }
 
    cout<<"Total even  numbers: "<<evennum<<endl;
    cout<<"Total odd numbers: "<<oddnum<<endl;
 
    return 0;
 
}
