// finding the unique number in an array 
// array with n = 2m + 1  terms where n is odd
// m no of terms repeat twice in the array and there is one term that comes only once in the array
// using nested loop and checking if any element repeats itself or not 
// if does not repeat print that number 

#include <iostream>
using namespace std;
// properties of xor 
// a ^ 0 = a , 0 ^ a = a , a ^ a = 0 , a ^ b ^ c = a ^ c ^ b = b ^ a ^ c 
int unique(int arr[], int n) {
    int ans = 0 ;
    // using properties of xor operator a ^ 0 = a , a ^ a = 0
    for( int i = 0 ; i < n ;i++) {
        ans = ans ^ arr[i] ;
    }
    return ans ;
}

int main() {
    int arr[2] = {1,2} ;
    cout << " unique element : " << unique( arr , 2 ) << endl;
}