// finding maximum subarray using kadanes algo 

#include <iostream>
#include <vector>
using namespace std ;

int kadanearray(vector<int> arr) {
    int resstart = 0 , resend = 0 ;
    int currstart = 0 ;

    int maxsum = arr[0] ;
    int maxending = arr[0] ;

    for( int i=1 ; i< arr.size() ; i++ ) {
        if( maxending + arr[i] < arr[i] ) {
            maxending = arr[i] ;
            currstart = i ;
        }
        else {
            maxending = maxending + arr[i] ;
        }
        if( maxending > maxsum ) {
            maxsum = maxending ;

            resstart = currstart ;
            resend = i ;
        }
    }
    vector<int> res ;
    for( int i=resstart ; i<=resend ; i++ ) {
        res.push_back(arr[i]) ;
    }

    for( int i=0 ; i<res.size() ;i++ ) {
        cout << res[i] << " " ;
    }

}
int main() {
    vector<int> arr = {2,3,-8,7,-1,2,3} ;
    kadanearray(arr) ;
    return 0 ;
}