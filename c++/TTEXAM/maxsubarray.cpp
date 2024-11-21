#include <iostream>
#include <vector>
using namespace std ;


int maxsubarray(vector<int> arr) {
    int res = arr[0] ;

    for( int i=0 ; i<arr.size() ; i++ ) {
        int currSum = 0 ;
        for( int j=i+1 ; j<arr.size() ; j++ ) {
            currSum = currSum + arr[j] ;
            res = max( res , currSum ) ;
        }
    }

    return res ;
}
int main() {
    vector<int> arr = {2,3,-8,7,-1,2,3} ;
    cout << maxsubarray(arr) ; 
    return 0 ;
}