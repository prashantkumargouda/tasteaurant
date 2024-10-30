// to check for any unique element in an array
#include <iostream>
#include <algorithm>
using namespace std;

bool unique(int arr[],int n) {
    sort( arr, arr + n);

    int j=0 ;
    int val = arr[j] ;

    int i = 1;    
    while(i<n) {
        if( val == arr[i]){
            return 1;        
        }
        j++;
        val = arr[j]  ;
        i++;
    } 
    return 0;
}

// driver code
int main() {
    int arr[5] = {2,-3,3,-3,5};
    int z = unique( arr , 5) ;
    if(z) {
        cout << "found" << endl;
    }
    else {
        cout << "not found" << endl;
    }
    return 0;
}