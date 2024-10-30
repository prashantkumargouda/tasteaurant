// insertion sort 

#include <iostream>
using namespace std ;

int main() {
    int n  ;
    cin >> n ;

    int arr[40] ;

    for( int i = 0; i<n ; i++ ) {
        cin >> arr[i] ;
    }

    for( int i = 1 ; i < n ; i++ ) {
        int currentElement = arr[i] ;
        int j = i-1 ;

        while( j>=0 && arr[j] > currentElement ) {
            arr[j+1] = arr[j] ;
            j = j-1 ;
        }

        arr[j+1] = currentElement ;
    }

    for( int i = 0 ; i < n ; i++ ) {
        cout << arr[i] << endl;
    }

    return 0 ;
}