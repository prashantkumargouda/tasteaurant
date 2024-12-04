#include <iostream>
#include <vector> 
using namespace std ;

int selection( vector<int> &arr ) {
    int n = arr.size() ;

    for( int i=0 ; i < n-1 ; i++ ) {
        int minindex = i ;

        for( int j=i+1 ; j< n ; j++ ) {
            if( arr[minindex] > arr[j] ) {
                minindex = j ;
            }
        }

        swap( arr[minindex] , arr[i] ) ;
    }

    for( int i=0 ; i<n ; i++ ) {
        cout << arr[i] << " " ;
    }
}
int main(){
    vector<int> arr = {2,3,1,4,0} ;
    selection( arr ) ;
    return 0 ; 
}