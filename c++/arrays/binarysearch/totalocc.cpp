// finding the total no of occurences of a given number 

#include <iostream>
using namespace std;

int leftOccurence( int arr[] , int size , int key ) {
    int start = 0;
    int end = size - 1;
    int mid = (start) + ( end - start ) / 2;
    int ans = 0;
    while( start <= end ) {
        if( key == arr[mid] ) {
            ans = mid ;
            end = mid - 1;
        }

        else if(key > mid[arr]) {
            start = mid + 1;
        }

        else if(key < mid[arr]) {
            end = mid - 1;
        }
        mid = start + (end - start) / 2 ;
    }
    return ans ;
    
}

int rightOccurence( int arr[] ,int size , int key ) {
       int start = 0;
    int end = size - 1;
    int mid = (start) + ( end - start ) / 2;
    int ans = 0;
    while( start <= end ) {
        if( key == arr[mid] ) {
            ans = mid ;
            start = mid + 1;
        }

        else if(key > mid[arr]) {
            start = mid + 1;
        }

        else if(key < mid[arr]) {
            end = mid - 1;
        }
        mid = start + (end - start) / 2 ;
    }
    return ans ;
}


// driver code 
int main() {
    int arr[6] = {1,2,3,3,3,5} ;

    cout << "No of Occurences : " << rightOccurence(arr,6,3) - leftOccurence(arr,6,3) + 1 << endl;
    return 0;
}