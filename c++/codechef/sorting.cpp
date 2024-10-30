#include <iostream>
using namespace std;

int main() {
    int n ;
    cout << "Enter the value of n:" << endl;
    cin >> n ;

    int arr[10] ;

    for( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i] ;
    }

    for( int i = 0 ; i < n ; i++ ) {
        int t = arr[i] ;
        if( arr[i] > arr[i+1] ) {
            arr[i] = arr[i+1] ;
            arr[i+1] = t ;
        }
    }

    for( int i = 0 ; i < n ; i++ ) {
        cout << arr[i] << endl;
    }

    return 0 ;
}