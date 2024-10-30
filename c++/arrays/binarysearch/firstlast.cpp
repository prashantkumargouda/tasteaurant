// finding the first and last position of an element 

#include <iostream>
using namespace std ;

int firstOccurence(int arr[] , int n , int key ) {
    int start = 0;
    int end = n - 1;
    int ans = -1 ;
    int mid = start + (end - start) / 2 ;

    while(start<=end) {
        if(arr[mid] == key ) {
            ans = mid ;
            end = mid - 1;
        }
        else if( arr[mid] > key ) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end-start) / 2;
    }
    return ans ;
}

int lastOccurence( int arr[] , int n , int key ) {
    int ans = -1 ;
    int start = 0 ;
    int end = n - 1 ;
    int mid = start + ( end - start ) / 2 ;

    while( start <= end) {
        if( arr[mid]==key ) {
            ans = mid ;
            start = mid + 1 ;
        }
        else if( arr[mid] > key ) {
            end = mid - 1;
        }
        else if( arr[mid] < key ) {
            start = mid + 1;
        }
        mid = start + ( end - start ) / 2;
    }
    return ans ;
}
int main() {
    int even[5] = {1,2,3,3,4} ;
    // int odd[5] = {1,2,2,3,4} ;
    cout << "first occurence" << firstOccurence(even, 5 , 3) << endl;
    cout << "last occurence" << lastOccurence(even , 5 , 3) << endl;
    return 0;
}

