// using for loop solving fibonacci 

#include <iostream>
using namespace std ;

int fibo(int n) {
    int fib = 0 ;
    int a = 0 ;
    int b = 1 ;

    for( int i = 0 ; i < n ; i++ ) {
        fib = a+b ;
        a = b ;
        b = fib ;
    }
    return a ;

}
int main() {
    int n ;
    cin>>n;

    cout << fibo(n) << endl;
    return 0 ;
}