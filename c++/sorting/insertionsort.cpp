// insertion sort 
// compare and place in its right place 

#include <iostream>
using namespace std ;

int main() {
    int n ;
    cin >> n ;

    cout << "Enter the values of array :" << endl;
    int arr[20] ;
    for( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i] ;
    }

    for( int i = 1 ; i < n ; i++ ) {
        int current_element = arr[i] ;
        int j = i-1 ;

        while( j >= 0 && arr[j] > current_element ) { // moving elements which are greater than current element one place ahead 
            arr[j+1] = arr[j] ;
            j = j-1 ;
        } 

        arr[j+1] = current_element ;
    }   

    for( int i = 0 ;i < n ;i++ ) {
        cout << arr[i] ;
        cout << " " ;
    }

    return 0 ;
}