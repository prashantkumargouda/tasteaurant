// swapping alternate numbers

#include <iostream>
using namespace std;

int swapAl(int arr[],int n) {
    int s1= 0;
    int s2 = 1;
    while(s2 < n)  {
        swap( arr[s1] ,arr[s2] ) ;
        s1 = s1 + 2;
        s2 = s2 + 2;
    }
}

int printArray(int arr[], int n) {
    cout << "Printing array" << endl;
    for( int i=0 ; i<n ; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl;
}

// driver code 
int main() {
    int arr[6] = {1,2,-3,4,5,6};
    swapAl( arr , 6 ) ;
    printArray( arr , 6 ) ;
    return 0;
}