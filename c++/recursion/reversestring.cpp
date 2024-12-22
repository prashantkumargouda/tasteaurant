#include <iostream>
using namespace std ;

void reverse( string &str , int i ,int j) {
    if( i>=j ) {
        return ;
    }

    swap( str[i] , str[j] ) ;
    i++ ;
    j-- ;

    reverse( str , i , j )  ;
}
int main() {
    string str1 = "PRASHANT" ;
    
    reverse( str1 , 0 , str1.length() - 1 ) ;

    cout << str1 << endl; 
    
    return 0 ;
}