#include <iostream>
#include <vector>

using namespace std ;

int subarray(vector<int> arr) {
    int maxSum = arr[0] ;
    int resstart = 0 ;
    int resend = 0 ;

    for( int i=0 ; i<arr.size() ; i++) {
        int currSum = 0 ;
        for( int j=i ; j< arr.size() ; j++ ) {
            currSum = currSum + arr[j] ;

            if( currSum > maxSum ) {
                maxSum = currSum ;
                resstart = i ;
                resend = j ;
            }
        }
    }    

    vector<int> res ;
    for( int i=resstart ; i<=resend ; i++ ) {
        res.push_back(arr[i]) ;
    }
    for(int i=0 ; i<res.size() ; i++) {
        cout << res[i] << " " ;
    }

}
int main() {
    vector<int> arr = {2,3,-8,7,-1,2,3} ;
    subarray(arr) ;
    return 0 ;
}