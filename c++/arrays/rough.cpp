// reversing an array 

/* #include <iostream>
using namespace std;

int revarr(int arr[], int size) {
    int start = 0 ;
    int end = size - 1 ;

    while( start <= end ) {
        swap( arr[start] , arr[end] ) ;
        start++;
        end--;
    }
    
    for( int i=0; i < size ; i++ ) {
        cout << arr[i] << " " ;
    }
    cout << endl;
}

// driver code 

int main() {
    int arr[5] = {1,2,4,5,6} ;
    revarr( arr , 5 ) ;
    cout << endl;
    return 0;
}
*/
/*
// finding element using linear search 

#include <iostream>
using namespace std;

bool search( int arr[] , int size , int key ) {
    for(int i=0; i<size ;i++) {
        if( arr[i] == key ) {
            return 1;
        }
    }

    return 0;
}

// driver code 

int main() {
    int key ;
    cout << "enter the element to find :" << endl;
    cin >> key ;

    int arr[6] = {-1,23,4,32,7,3} ;
    int g = search( arr , 6 , key ) ;

    if (g) {
        cout << "element found" << endl;
    }
    else {
        cout << "element not found" << endl;
    }

    return 0;
}
*/

// finding the length of an array 
#include <iostream>
using namespace std;

int 