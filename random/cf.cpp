#include <iostream>
#include <vector> 
#include <algorithm> 

using namespace std ;

int main() {
    int k ; 
    cin >> k ;

    int month = 0 , sum = 0 ;

    vector<int> a(12) ;
    for(int i=0 ; i<12 ; i++ ) {
        cin >> a[i] ;
    }

    sort(a.rbegin() , a.rend()) ;

    for(int i=0 ; i<12  ; i++ ) {
        sum += a[i] ;
        month++ ;

        if(sum >= k ) {
            break ;
        }
    }

    if(sum >=k) {
        cout << month << endl; 
    }
    else {
        cout << -1 << endl; 
    }


}