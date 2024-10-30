// merging two sorted 

#include <iostream>
using namespace std ;

int merge( int arr1[] , int arr2[] , int m , int n , int arr3[] ) {
    int i = 0 , j = 0 ;
    int k = 0 ;
    while( i < m && j < n ) {
        if( arr1[i] < arr2[j] ) {
            arr3[k++] = arr1[i++] ;
        }
        else {
            arr3[k++] = arr2[j++] ;
        }
    }

    while( i < m ) {
        arr3[k++] = arr1[i++] ;
    }

    while( j < n ){
        arr3[k++] = arr2[j++] ;
    }
}

void print( int arr[] , int n ) {
    for( int i = 0 ; i < n ; i++ ) {
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int main() {
    int arr1[5] = {1,3,5,7,9} ;
    int arr2[3] = {2,4,6} ;
    int arr3[8] = {}  ;

    merge( arr1 , arr2 , 5 , 3 , arr3 ) ;
    print( arr3 , 8 ) ;

    return 0 ;
}