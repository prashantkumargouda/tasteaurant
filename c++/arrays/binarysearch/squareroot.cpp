// finding the square root using binary search 
#include <iostream>
using namespace std;

int sq( int n ) {
    int start = 0 ;
    int end = n ;
    int mid = start + ( end - start ) / 2 ;
    int ans = -1 ;
    int square = mid * mid ;
    while( start <= end ) {
        if( square == n ) {
            ans = mid ;
        }
        else if( square < mid ) {
            ans = mid ;
            start = mid + 1 ;
        }
        else {
            end = mid - 1 ;
        }
        mid = start + ( end - start ) / 2 ;
    }
    return ans ;
}

int main() {
    int n ;
    cout << "Enter the value of n :" << endl;
    cin >> n ;
    cout << "square root :" << sq(n) << endl;
    return 0 ;
}