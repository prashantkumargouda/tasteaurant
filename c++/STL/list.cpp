// list 
// doubly linked list 
#include <iostream>
#include <list>
using namespace std ;

int main() {
    list<int> l ;

    l.push_back(2) ;
    l.push_front(1) ;

    for( int i : l) {
        cout << i << " " ;
    }
    cout << endl;
    l.erase( l.begin() ) ;
    for( int i : l ) {
        cout << i << " " ;
    }
    cout << endl;
    cout << "size of list :" << l.size() << endl;
    
    list<int> n(l) ; // list copied 
    list<int> neww(5,300) ;

    cout << "printing neww :" << endl;

    for( int i : neww ) {
        cout << i << " " ; 
    } 
    cout << endl;

}