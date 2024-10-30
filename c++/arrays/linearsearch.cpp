// finding the key

#include <iostream>
using namespace std;

bool search(int arr[], int n, int key) {
    for(int i=0;i<n;i++) {
        if( arr[i] == key ) {
            return 1;
        }
        
    }

    return 0;

}

//driver code
int main() {
    int key ;
    cout << "enter the element to find :" << endl;
    cin >> key;

    int arr[5] = {1,-4,3,7,9} ;
    // taking inputs
    //for(int i=0;i<5;i++) {
        //cin >> arr[i];
    //}

    int z = search( arr, 5, key ) ;
    
    if(z) {
        cout << "found" << endl;
    }
    else {
        cout << "not found" << endl;
    }
    return 0;

}