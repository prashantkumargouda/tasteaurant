#include <iostream> 
using namespace std ;

int binary( int *arr , int key , int s ,int e ) {
    int start = s ;
    int end = e ;
    int mid = start + ( end - start ) / 2 ;

    if( start > end ) {
        return 0 ;
    }
    while( start <= end ) {
        if( arr[mid] == key ) {
            return 1 ;
        }
        else if( arr[mid] > key ) {
            return binary( arr , key , start , mid - 1 ) ;
        }
        else { 
            return binary( arr , key , mid + 1 , end ) ;
        }
        mid = start + ( end - start ) / 2 ;
    }
    
}
int main() {
    int arr[5] = { 1,2,3,4,5 } ;
    if( binary( arr , 1 , 0 , 5 )) {
        cout << "found" << endl;
    }
    else {
        cout << "not found" << endl; 
    }
    return 0 ;
}