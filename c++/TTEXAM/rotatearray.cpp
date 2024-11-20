#include <iostream>
using namespace std ;

int main() {
    int n ;
    cout << "Enter the value of n" << endl;
    cin >> n ;

    int d ;
    cout << "Enter the value of d :" << endl; 
    cin >> d ;

    if ( d > n ) {
        d = d % n ;
    }   

    int arr[5] ;
    cout << "Enter the array values :" << endl; 
    for( int i=0 ; i<n ; i++) {
        cin >> arr[i] ;
    }
    for( int i=0 ; i < d ; i++ ) {
        int last = arr[n-1] ;
        for( int j = n - 1 ; j > 0 ; j-- ) {
            arr[j] = arr[j-1] ;
        }
        arr[0] = last ;
    }
    for( int i=0 ; i < n ; i++ ) {
        cout << arr[i] << " "; 
    }

    return 0 ;
}

