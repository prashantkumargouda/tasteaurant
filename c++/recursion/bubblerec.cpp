#include <iostream>
#include <vector>
using namespace std ;
int bubble( vector<int>& arr , int n ) {
    if( n == 1 ) {
        return 1 ;
    }
    for( int i = 0 ; i < n - 1; i++ ) {
        if( arr[i] > arr[i+1] ) {
            swap( arr[i] , arr[i+1] ) ;
        }
    }

    bubble( arr , n-1 ) ; 
}
int main() {
    int n ;
    cin >> n ;
    vector<int> arr(n) ;
    for( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i] ;
    }
    bubble( arr , n ) ;

    for( int i = 0 ; i< n ; i++ ){
        cout << arr[i] << " " ;
    }
    
    return 0 ;
}