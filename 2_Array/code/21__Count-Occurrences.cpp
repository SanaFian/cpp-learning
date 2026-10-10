 // Exercise 21 :
// Write a program that counts the number of occurrences of each element in an array.

#include <iostream>
using namespace std;
 
int main()
{
    int arr[100], frequency[100];
    int i, j, count, num;
 
    //Enter size of array
    cout<<"Enter size of array: ";
    cin>>num;
 
    //Reading elements of array
    cout<<"Enter elements in array: ";
    for(i=0; i<num; i++)
    {
       cin>>arr[i];
 
        //Initially initialize frequency variable to -1
        frequency[i] = -1;
    }
 
     for(i=0; i<num; i++)
    {
        count = 1;
        for(j=i+1; j<num; j++)
        {
        //If duplicate element is found
        if(arr[i]==arr[j])
            {
                count++;
 
                //Make sure not to count frequency of same element again
                frequency[j] = 0;
            }
        }
 
        //If frequency of current element is not counted
        if(frequency[i] != 0)
        {
            frequency[i] = count;
        }
    }
 
    //Print frequency of each element
    cout<<"\nFrequency of all elements of array : \n";
    for(i=0; i<num; i++)
    {
      if(frequency[i] != 0)
        {
            cout<<arr[i]<<" occurs "<<frequency[i]<<" times\n";
        }
    }
 
       return 0;
}
