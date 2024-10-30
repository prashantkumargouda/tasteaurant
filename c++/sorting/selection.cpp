// selection sort 
#include <iostream>
using namespace std ;

int main() {
    int arr[10] ;
    int n ;
    cout << "Enter the value of n :" << endl;
    cin >> n ;
    for( int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }

    for( int i = 0 ; i < n-1 ; i++) {
        int minIndex = i ;
        for( int j = i+1; j < n ; j++) {
            if( arr[minIndex] > arr[j] ) {
                minIndex = j ;
            }
        }
        swap(  arr[i] , arr[minIndex]  ) ;
    }

    for( int i = 0 ; i < n ; i++) {
        cout << arr[i]  << "\t";
    }
    return 0 ;
}