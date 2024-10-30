// finding the min and max value of an array

#include <iostream>
using namespace std;

int getMax(int num[], int n) {
    int max = INT32_MIN;
    for(int i=0;i<n;i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }
    // returning max
    return max;
}
// function for minimum value 
int getMin(int num[], int n) {
    int min = INT32_MAX;
    for(int i=0;i<n;i++) {
        if(num[i] < min) {
            min = num[i] ;
        }
    }
    // returning min value 
    return min;
}

// driver code 
int main() {
    int size ;
    cout << "enter the size :" << endl;
    cin >> size;

    int arr[100];

    //taking inputs for the array

    for(int i=0;i<size;i++) {
        cin >> arr[i] ;
    }

    // using functions

    cout << "max value :" << getMax(arr,size) << endl;
    cout << endl;
    cout << "min value :" << getMin(arr,size) << endl;
    cout << endl;


}
