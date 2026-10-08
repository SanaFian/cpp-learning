// Exercise 20 :
// Write a program that copies all elements of an array into another array.

#include <iostream>
#define MAX_SIZE 100 //Maximum size of the array
using namespace std;
 
int main()
{
    int first[MAX_SIZE], second[MAX_SIZE];
    int i, num;
 
    //Enter size of array
    cout<<"Enter the size of the array : ";
    cin>>num;
 
    //Reading elements of array
    cout<<"Enter elements of first array : ";
    for(i=0; i<num; i++)
    {
        cin>>first[i];
    }
 
 
   //Copy all elements from first array to second array
   for(i=0; i<num; i++)
    {
        second[i] = first[i];
    }
 
    //Printing all elements of first array entered by user
    cout<<"Elements of first array are:"<<endl;
    for(i=0; i<num; i++)
    {
        cout<<first[i]<<"\t";
    }
 
 
    //Printing all elements of second array
   cout<<"\nElements of second array are: \n ";
                                for(i=0; i<num; i++)
    {
         cout<<second[i]<<"\t";
    }
 
  return 0;
}
