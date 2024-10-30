#include <iostream>
using namespace std ;

int dup( int nums[] , int n ) {
    int j = 1 ;
    for( int i=0 ; i < n ; i++ ) {
        if( nums[i] != nums[i+1] ) {
            nums[j] = nums[i+1] ;
            j++ ;
        }
    }

    return j-1 ;
} 

int main() {
    int arr[6] = {1,1,1,2,2,3} ;
    cout << dup( arr , 6 );
    return 0 ;
}