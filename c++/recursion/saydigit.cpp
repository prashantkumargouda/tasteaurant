// say the given digit 

#include <iostream>
using namespace std ;
void sayDigit( int n , string *arr ) {
    if( n == 0 ){
        return ;
    }
    int digit = n % 10;
    n = n / 10 ;
    sayDigit( n , arr ) ;
    cout << arr[digit] << " " ;
}
int main() {
    string arr[10] = {"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine" } ;
    sayDigit( 412 , arr ) ;
    cout << endl << endl ;
    return 0 ;
}