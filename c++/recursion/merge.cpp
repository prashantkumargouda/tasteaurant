#include <iostream>
using namespace std ;


void merge( int *arr , int s , int e ) {
    
}
void mergeSort( int *arr , int s , int e ) {
    // base case 
    if( s >= e ) {
        return ;
    }
    int mid = ( s + e ) / 2 ;

    // left wala part sort karo
    mergeSort( arr , s , mid ) ;

    // right wala part sort karo 
    mergeSort( arr , mid + 1 , e ) ;

    merge( arr , s , e ) ;

}
int main() {

}