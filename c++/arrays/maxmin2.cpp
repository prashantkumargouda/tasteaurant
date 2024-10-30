#include <iostream>
using namespace std;

// creating getMax function 
int getMax(int arr[],int n) {
    int maxi = INT32_MIN;
    for(int i=0;i<n;i++) {
        maxi = max ( maxi , arr[i] ) ;
    }    
    // returning max value 
    return maxi;
}

// creating getMin function
int getMin(int arr[], int n) {
    int mini = INT32_MAX;
    for(int i=0;i<n;i++) {
        mini = min( mini , arr[i]) ;
    }
    // returing min value 
    return mini;
}


int main() {
    int size ;
    cout << "enter the size of array :" << endl;
    cin >> size;

    // taking inputs
    int arr[100];
    for(int i=0;i<size;i++) {
        cin >> arr[i];
    }

    cout << "maximum value " << getMax(arr,size) << endl;
    cout << endl;
    cout << "minimum value " << getMin(arr,size) << endl;
    cout << endl;

}