#include <iostream>
using namespace std ; 

bool isLinearSearch( int arr[] , int size , int key ) {
    if( size == 0 ) {
        return false ;
    }
    if( arr[0] == key ) {
        return true ;
    }

    return isLinearSearch( arr+1 , size - 1 , key ) ;
}
int main() {
    int arr1[5] = { 1 , 2 , 3 , 4 , 5 } ;  

    cout << isLinearSearch( arr1 , 5 , 6 ) << endl ; 

    return 0 ;
}