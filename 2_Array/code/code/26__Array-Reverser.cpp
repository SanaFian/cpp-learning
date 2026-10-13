// Exercise 26 :
// Write a program that finds the reverse of an array.

#include <iostream>
#define MAX_SIZE 100 //Maximum size of the array
using namespace std;
 
int main() {
int array[MAX_SIZE];
int size, i;
 
  // Reading size of array
  cout<<"Enter size of the array: ";
  cin>>size;
 
  // Reading array elements
  cout<<"Enter elements in array: ";
    for (i = 0; i < size; i++) {
    cin>>array[i];
  }
 
  //Print array in reversed order
 cout<<"\nArray in reverse order: ";
    for (i = size - 1; i >= 0; i--) {
    cout<<"\t"<< array[i];
  }
 
   return 0;
}
