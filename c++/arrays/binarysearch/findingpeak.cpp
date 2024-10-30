// finding peak of a mountain 

#include <iostream>
using namespace std;

int peak( int arr[] , int n ) {
    int start = 0 ;
    int end = n - 1;    
    int mid = start + ( end - start ) / 2 ;

    while( start < end ) {
        if( arr[mid] < arr[mid+1] ) {
            start = mid + 1;
        }
        else {
            end = mid ;
        }
        mid = start + ( end - start ) / 2 ;
    }
    return start ;
}
int main() {
    int even[4] = {3,4,5,1} ;
    cout << "peak of the mountain :" << peak( even , 4 ) << endl;
    return 0;
}