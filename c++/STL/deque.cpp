// dequeue 

// dynamic 

#include <iostream>
#include <deque>
using namespace std ;


int main() {
    deque<int> d ;

    d.push_back(1) ;
    d.push_front(2) ;

    // d.pop_back() ;

    for( int i : d) {
        cout << i << " " ;
    }
    cout << endl; 

    cout << "Printing 1st index element :" << d.at(1) <<endl ;
    cout << "element at front :" << d.front() << endl;
    cout << "Element at back :" << d.back() << endl;

    cout <<"empty or not :" << d.empty() << endl;

    cout << "before erase " << d.size() << endl;

    d.erase( d.begin() , d.begin() + 1) ;

    cout << "after erase :" << d.size() << endl;
    
}