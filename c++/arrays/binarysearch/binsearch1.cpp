// binary search 

#include <iostream>
using namespace std;

int bin( int arr[] , int size , int key ) {
    int start = 0;
    int end = size - 1;
    
    int mid = ( start + end ) / 2 ;

    while( start <= end ) {

        if( key == arr[mid] ) {
            return mid ;
        }

        if( key >= arr[mid] ) {
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }
        mid = (start + end) / 2 ;
    }

}


int main() {
    int even[6] = {2,4,6,8,12,18} ;
    int odd[5] = {3,8,11,14,16} ;

    int evenIndex = bin(even , 6 , 20) ;
    int oddIndex = bin( odd , 5, 11) ;

    cout << "20 Found at index : " << evenIndex << endl;

    cout << "11 found at index : " << oddIndex << endl;

    return 0;
}