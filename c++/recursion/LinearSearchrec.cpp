// linear search using recursion 
#include <iostream>
using namespace std ;

bool LinearSearch( int *arr , int size , int key ) {
    if( size == 0 ){
        return false ;
    }
    if( arr[0] == key ) {
        return true ;
    }
    
    return LinearSearch( arr + 1 , size - 1 , key ) ;
    
}

int main() {
    int arr[5] = { 1,2,3,4,5 } ;
    if( LinearSearch(arr , 5 , 6) ) {
        cout << "found" << endl;
    }
    else {
        cout << "Not found" << endl;
    }
}
