// finding the first and last occurences of a number 

#include <iostream>
using namespace std;

int firstOccurence( int arr[] , int size , int key ) {
    int start = 0 ;
    int end = size - 1 ;

    int mid = start + (end - start) / 2;

    int ans = 0 ;
    while( start <= end ) {
        if( key == arr[mid] ) {
            ans = mid ;
            end = mid - 1;
        }

        else if( key > arr[mid] ) {
            start = mid + 1;
        } 

        else if( key < arr[mid]) {
            end = mid - 1 ;
        }

        mid = start + (end - start) / 2 ;
    }
    return ans ;
}

int lastOccurence( int arr[] , int size , int key ) {
    int start = 0;
    int end = size - 1; 
    int ans = 0 ;
    int mid = start + ( end - start ) / 2;

    while(start <= end) {
        if( key == arr[mid] ) {
            ans = mid ;
            start = mid + 1;
        }

        else if( key > arr[mid]) {
            start = mid + 1;
        }
        else if( key < arr[mid]) {
            end = mid - 1;
        }

        mid = start + (end - start) / 2 ;
    }
    return ans ;
}

// driver code 

int main() {
    int arr[6] = {1,3,3,3,5,6} ;
    int arr2[7] = {1,2,3,4,4,4,5} ;

    cout << "lastOccurence of 3 : " << lastOccurence(arr , 6, 3) << endl;
    cout << "firstOccurence of 3 : " << firstOccurence(arr ,6 , 3) << endl;
    return 0;
}