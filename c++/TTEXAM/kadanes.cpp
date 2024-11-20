#include <iostream>
#include <vector>
using namespace std ;

int kadanes(vector<int> arr) {
    int res = arr[0] ;
    int maxSum = arr[0] ;

    for( int i=1 ; i<arr.size() ; i++ ) {
        maxSum = max( maxSum + arr[i] , arr[i]) ;

        res = max( maxSum , res ) ;
    }
    return res ;
}

int main() {
    vector<int> arr = {2,3,-8,7,-1,2,3} ;
    cout << kadanes(arr) << " " ;
    return 0 ;
}
