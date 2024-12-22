// check for pallindrome string using recursion 

#include <iostream>
using namespace std ; 

bool checkPallindrome( string str , int i , int j ) {
    if( i > j ) {
        return -1;
    }
    if( str[i] != str[j]) {
        return false ;
    }

    else {
        return checkPallindrome( str , i + 1 , j - 1 ) ;
    }
}
int main() {
    string str = "AB" ;

    cout << checkPallindrome( str , 0 , str.length() - 1 ) << endl; 

    return 0 ;
}