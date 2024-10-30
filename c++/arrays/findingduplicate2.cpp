// finding the duplicate value out of N-1 values 
#include <iostream>
using namespace std;

int dup(int arr[] , int n ) {
    int ans = 0 ;
    for(int i=0; i < n ; i++) {
        ans = ans ^ arr[i] ;
    }

    for(int i = 1 ; i < n ;i++) {
        ans = ans ^ i;
    }

    return ans ;

}

// driver code 
int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,2};
    cout << "duplicate element :" << dup(arr, 10) << endl;
    return 0;
}