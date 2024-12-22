#include <iostream>
using namespace std ;

int BinarySearch( int arr[] , int s , int e , int key ) {
    if( s > e ) {
        return -1 ;
    }

    int mid = s + ( e - s ) / 2 ; 

    if( arr[mid] == key ) {
        return 1 ;
    }

    if( arr[mid] > key ) {
        return BinarySearch( arr , s , mid - 1, key ) ;
    }

    else {
        return BinarySearch( arr , mid + 1 , e , key ) ;
    }
}

int main() {
    int arr1[5] = { 1,2,3,4,5 } ;

    cout << BinarySearch( arr1 , 0 , 4 , 6) << endl; 

    return 0 ;
}