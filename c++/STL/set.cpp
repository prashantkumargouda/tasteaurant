// sets only store unique elements 
// no duplicate elements 
// no modification 

// returns elements in sorted order 

// ordered sets and unordered sets 

#include <iostream>
#include <set>
using namespace std ;

int main() {
    set <int> s ;
    s.insert(1) ;
    s.insert(5) ;
    s.insert(0) ;
    s.insert(6) ; 
    for( int i : s ) {
        cout << i << " " ; // comes out in sorted order 
    } 
    cout << endl;
    set<int> :: iterator it = s.begin() ; // ***
    it++ ;
    s.erase(it) ;
    for( int i : s ) {
        cout << i << " " ; // comes out in sorted order 
    } 
    cout << endl;
    cout <<"count if 5 present or not -> " <<  s.count(-5) << endl;

    
}