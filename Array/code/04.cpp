#include <iostream>
#define MAX_SIZE 100 //Maximum size of the array
using namespace std;
 
int main()
{
 
   int arr[100];
    int i, max, size;
 
   // Reading array sizr & elements in the array
 
    cout<<"Enter size of the array: ";
    cin>>size;
    cout<<"Enter elements in the array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
 
    /* Supposes the first element as maximum */
    max = arr[0];
 
    /*
     * Finds maximum in all array elements.
     */
    for(i=1; i<size; i++)
    {
        // Finding max number
        //if cuurent element of array is greater than max
        if(arr[i]>max)
        {
            max = arr[i];
        }
 
    }
    //Finding the maximum element
 
    cout<<"Maximum element is: "<<max<<endl;

    return 0;
}
