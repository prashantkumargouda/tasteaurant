// odd even game 
#include <iostream>
using namespace std ;

int main() {
    int arr[20] ;
    int n ;
    cout << "Enter the value of n :" << endl;
    cin >> n ;

    for( int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }

    int mid ;
    int a[20] ;
    int j = 0 ;

    for( int i = 0 ; i < n ;i++) {
        if( arr[i] % 2 == 0) {
            a[j] = arr[i] ;
            mid = j ;
            j = j+1 ;
        }
    }
    cout << mid << endl;


    for( int i= 0 ; i < n ; i++) {
        if( arr[i] % 2 != 0 ) {
            a[mid+1] = arr[i] ;
            mid += 1 ;
        }
        
    }

    for( int i = 0 ; i < n ;i++) {
        cout << a[i] << "\t" ;
    }
    cout << endl;

    return 0 ;

}