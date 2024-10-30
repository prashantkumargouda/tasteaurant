#include <iostream>
using namespace std ;

// void rev( string &str , int i , int j ) {
//     if(i>j) {
//         return ;
//     }

//     swap( str[i] , str[j] ) ;
//     i++ ;
//     j-- ;

//     rev( str , i , j ) ;

// }
// int main() {

//     string name = "prashant" ;

//     rev(name , 0 , name.length() - 1 ) ;
//     cout << name << endl; 

//     return 0;

// }

// using single pointer 
void rev( string &str , int i ) {
    while( i < str.length() - i - 1 ) {
        swap( str[i] , str[str.length()- i - 1 ] ) ;
        i++ ;
    }
}

int main() {
    string name = "prashant" ;
    rev( name , 0 ) ;
    cout << name << endl; 
    return 0 ;
}