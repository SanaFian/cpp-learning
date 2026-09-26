#include <iostream>
#define MAX_SIZE 100 //Maximum size of the array
using namespace std;
 
int main()
{
    int arr[MAX_SIZE]; //Declares sizr of array
    int i, num;
    cout<<"Enter size of array: ";
    cin>>num;
 
    cout<<"Enter "<<num<< " elements in the array :";
 
    //Reads size & elements in array
    for(i=0; i<num; i++)
    {
        cin>>arr[i];
    }
 
    //Prints all elements of array
    cout<<"\nElements in array are: ";
    for(i=0; i<num; i++)
    {
        cout<<arr[i]<<"\t";
    }
 
    return 0;
}
