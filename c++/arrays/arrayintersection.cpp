// to check for intersection in two different arrays 
// using nested looop

#include <iostream>
using namespace std;

int arrayInter(int arr1[],int arr2[],int n, int m) {
    for( int i=0 ; i<n ; i++) {
        for( int j=0 ; j<m ; j++) {
            if( arr1[i] == arr2[j] ) {
                cout << arr2[j] << " ";
            }   
        }
    }
}

// driver code 
int main() {
    int arr1[4] = {1,9,2,3} ;
    int arr2[3] = {1,9,3} ;
    arrayInter( arr1,arr2,4,3) ;
    return 0;
}