// Exercise 23 :
// Write a program that counts the total number of duplicate elements in an array.

#include <iostream>
using namespace std;
 
int main()
{
    int arr[100];
    int i, j, n, count = 0;
 
    // Readinng size of the array
    cout<<"Enter size of the array : ";
    cin>>n;
 
    //Reading elements of array
    cout<<"Enter elements in array : ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    //Find all duplicate elements in array
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
        // If duplicate element found then increment count by 1
        if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    cout<<"\nTotal number of duplicate elements found in array: "<<count;
 
    return 0;
}
