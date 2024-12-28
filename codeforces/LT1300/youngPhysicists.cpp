#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;

int main() {
    string str1 , str2 ;
    
    cin >> str1 >> str2 ;

    string str3 ;
    
    for( int i = 0 ; i < str1.size() ; i++ ) {
        if( str1[i] == str2[i] ) {
            str3.push_back('0') ;
        }
        else {
            str3.push_back('1') ;
        }
    }
    
    cout << str3 << endl; 
}