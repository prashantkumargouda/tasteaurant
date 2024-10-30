#include <iostream>
using namespace std ;

int bookallocation( int arr[] , int n , int m ) {
    int start = 0 ;
    int sum = 0 ;
    int ans = -1 ;

    for( int i = 0 ; i < n ; i++ ) {
        sum += arr[i] ;
    }
    int end = sum ;
    int mid = start + ( end - start ) / 2 ;
    while( start <= end ) {
        if(ispossible(arr , n , m , mid )) {
            ans = mid ;
            end = mid - 1 ;
        }
        else {
            start = mid + 1 ;
        }
    }
    return ans ;
}
bool ispossible( int arr[] , int n , int m , int mid ) {
    int studentcount = 1 ;
    int pagesum = 0 ;
    for( int i = 0 ; i < n ; i++ ) {
        if( pagesum + arr[i] <= mid ) {
            pagesum = pagesum + arr[i] ;
        }
        else {
            studentcount++ ;
            if( studentcount > m || arr[i] > mid )  {
                return false ;
            } 
            else {
                pagesum = 0;
                pagesum = pagesum + arr[i] ;
            }

        }
    }
    return true ;
}

int main() {
    int arr[5] ;
    cout << "Enter the value for the array :" << endl;
    for( int i = 0; i < 5 ; i++) {
        cin >> arr[i] ;
    }

    // use both the above functions here using values of m and n and values of array 

    return 0 ;

}