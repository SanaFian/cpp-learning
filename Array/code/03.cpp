#include <iostream>

using namespace std;

int main(){

    int number[10];
    int sum=0, avg;

    cout << "add 10 number: " << endl;

    for(int i=0; i<10; i++){
        cin >> number[i];
        sum = sum + number[i];
    }
    avg = sum/10;
    cout << "avg is: " << avg << endl;

    return 0;
}
