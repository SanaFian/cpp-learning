// Exercise 24 :
// Write a program that merges two sorted arrays.

#include <iostream>
#define MAX_SIZE 100 //Maximum size of the array
using namespace std;
 
int main()
{
    int arr1[MAX_SIZE], arr2[MAX_SIZE], mergeArray[MAX_SIZE];
    int size1, size2, mergeSize;
    int index1, index2, mergeIndex;
    int i;
 
    //Reading size of the array
    cout<<"Enter the size of 1st array : ";
    cin>>size1;
 
    //Reading elements in the array
    cout<<"Enter elements in 1st array : ";
    for(i=0; i<size1; i++)
    {
        cin>>arr1[i];
    }
 
    //Reading elements in the array
    cout<<"\nEnter the size of 2nd array : ";
    cin>>size2;
 
    //Reading elements in 2nd array
    cout<<"Enter elements in 2nd array : ";
    for(i=0; i<size2; i++)
    {
        cin>>arr2[i];
    }
 
    mergeSize = size1 + size2;
 
 
    //Merging two array in ascending order
    index1 = 0;
    index2 = 0;
    for(mergeIndex=0; mergeIndex < mergeSize; mergeIndex++)
    {
 
        //If all elements of one array is merged to final array
        if(index1 >= size1 || index2 >= size2)
        {
            break;
        }
            if(arr1[index1] < arr2[index2])
        {
            mergeArray[mergeIndex] = arr1[index1];
            index1++;
        }
             else
        {
            mergeArray[mergeIndex] = arr2[index2];
            index2++;
        }
    }
 
    //Merging the remaining elements of array
    while(index1 < size1)
    {
        mergeArray[mergeIndex] = arr1[index1];
        mergeIndex++;
        index1++;
    }
    while(index2 < size2)
    {
        mergeArray[mergeIndex] = arr2[index2];
        mergeIndex++;
        index2++;
    }
 
    //Print merged array
    cout<<"\nArray merged in ascending order : ";
        for(i=0; i<mergeSize; i++)
    {
        cout<<"\t"<< mergeArray[i];
    }
 
        return 0;
}
