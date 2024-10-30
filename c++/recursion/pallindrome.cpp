// check for pallindrome using recursion 

#include <iostream>
using namespace std ;

bool checkpallindrome( string &str , int i , int j ) {
    if(i>j)
        return true;

    if( str[i] != str[j] ){
        return false ;
    }
    else {
        checkpallindrome( str , i+1 , j-1 ) ;
    }
}
int main() {
    string name = "aabbcbbaa" ;

    bool checkP = checkpallindrome( name , 0 , name.length() - 1 ) ;

    if( checkP ) {
        cout << "Pallindrome" << endl;
    }
    else {
        cout << "NOT" << endl; 
    }
    return 0 ;
}