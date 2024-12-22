#include <iostream>
using namespace std ;

bool issorted( int arr[] , int size ) {
    if( size == 0 || size == 1 ) {
        return true ;
    }
    if( arr[0] > arr[1] ) {
        return false ;
    } 

    return ( issorted( arr + 1 , size - 1 ) ) ; 
}
int main() {
    int arr1[5] = { 1 , 2 , 6 , 4 , 5 } ;

    cout << issorted( arr1 , 5 ) << endl ;
    
}