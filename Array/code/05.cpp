#include <iostream>
#define MAX_SIZE 100 //Maximum size of the array
using namespace std;
 
int main()
{
 
   int arr[100];
    int i, min, size;
 
   // Reading array sizr & elements in the array
 
    cout<<"Enter size of the array: ";
    cin>>size;
    cout<<"Enter elements in the array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
 
    /* Supposes the first element as minimum */
    min = arr[0];
 
    /*
     * Finds minimum in all array elements.
     */
    for(i=1; i<size; i++)
    {
        // Finding min number
        //if cuurent element of array is less than min
        if(arr[i]<min)
        {
            min = arr[i];
        }
 
    }
    //Finding the minimum element
 
    cout<<"Minimum element is: "<<min<<endl;

    return 0;
}
