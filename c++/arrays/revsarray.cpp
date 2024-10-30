// reversing an array

#include <iostream>
using namespace std;

// function to reverse
int revArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    
    while(start <= end ) {
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }

}

// printing the reversed array
int printArray(int arr[],int size) {
    for(int i=0;i<size;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main() {
    int arr1[5] = {1,4,5,6,3};
    int arr2[7] = {9,7,10,9,4,2,8} ;

    revArray(arr1,5) ;
    revArray(arr2,7) ;

    printArray(arr1,5) ;
    printArray(arr2,7) ;
}