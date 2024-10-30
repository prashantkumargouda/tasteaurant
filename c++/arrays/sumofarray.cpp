// print the sum of elements of an array

#include <iostream>
using namespace std;

int sumArray(int arr[], int n) {
    int sum = 0;
    for(int i=0 ; i<n ; i++) {
        sum = sum + arr[i] ;
    }
    // returning sum of array
    return sum;
}

// driver code
int main() {
    int size;
    cout << "Enter the size of array: " << endl;
    cin >> size;

    int arr[size];
    // taking inputs for the array
    for(int i=0;i<size;i++) {
        cin >> arr[i] ;
    }

    cout << "sum of elements of array :" << sumArray( arr , size ) ;
    cout << endl;

}