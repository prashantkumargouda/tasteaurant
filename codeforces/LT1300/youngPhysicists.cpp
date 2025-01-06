#include <iostream>
using namespace std ;

int main() {
    int n ;
    cin >> n ;

    int still = 0 ;
    int capacity = 0 ;
    for(int i=0 ; i< n ;i++ ) {
        int a , b ;

        cin >> a>> b ;

        still -= a ;
        still += b ;

        capacity = max( capacity , still ) ;
    }

    cout << capacity << endl;
    
    return 0 ;
}