// searching for an element in an sorted and rotated array

#include <iostream>
using namespace std;

int getPivot( int arr[] , int n ) {
    int start = 0 ;
    int end = n - 1 ;
    int mid = start + ( end - start ) / 2;

    while( start < end ) {
        if( arr[mid] >= arr[0] ) {
            start = mid + 1 ;
        }
        else {
            end = mid ;
        }
        mid = start + ( end - start ) / 2 ;
    }
    return start ;
}

int bin( int arr[] , int s , int e , int key ) {
    int start = s;
    int end = e ;
    
    int mid = start + ( end - start ) / 2;

    while( start <= end ) {

        if( key == arr[mid] ) {
            return mid ;
        }

        else if( key >= arr[mid] ) {
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }
        mid = start + ( end - start ) / 2 ;
    }

}

int search( int arr[] , int k , int n) {

    int pivot = getPivot( arr , n ) ;

    if( k >= arr[pivot] && k <= arr[n-1] ) {
        return bin(arr,pivot,n-1,k) ;
    }
    else {
        return bin( arr , 0 , pivot - 1 , k ) ;
    }

}

int main() {
    int even[5] = {7,9,1,2,3} ;
    cout << "Element found at :" << search(even , 1 , 5 ) ;
    return 0 ;

}