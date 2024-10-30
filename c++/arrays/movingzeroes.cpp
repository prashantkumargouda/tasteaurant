#include <iostream>
using namespace std ;

int main() {
    int arr[6] = {0,1,0,3,12,0} ;
    int i = 0 ;
    for( int j = 0 ; j < 6 ; j++ ) {
        if( arr[j] != 0) {
            swap( arr[j] , arr[i] ) ;
            i++ ;
        }
    }

    for( int k = 0 ; k < 6 ; k++ ) {
        cout <<arr[k] << " " ;
    }
    cout << endl;
    return 0 ;
}