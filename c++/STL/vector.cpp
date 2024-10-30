// vector using STL 
// dynamic 
#include <iostream>
#include <vector>

using namespace std ;

int main() {
    vector<int> v ;
    cout << "capacity -> " << v.capacity() << endl;

    v.push_back(1)  ;
    cout << v.capacity() << endl;

    v.push_back(2) ;
    cout << v.capacity() << endl;

    v.push_back(3) ;
    cout << v.capacity() << endl;

    cout << "size -> " << v.size() << endl;

    cout << "Element at 2 :" << v.at(2) << endl;

    cout << v.front() << endl; 
    cout << v.back()  << endl;

    cout << "before pop " << endl;

    for( int i : v ) {
        cout << i << " " ;
    }
    cout << endl;

    v.pop_back() ;

    cout << "After pop" << endl;
    for( int i : v ) {
        cout << i << " " ;
    }
    cout << endl; 

    cout << "before clear size " << endl;
    cout << v.size() << endl;
    v.clear() ;
    cout << "after clear size " << endl;
    cout << v.size() << endl; 
    
    vector<int> a(5,1) ;
    cout << "printing a :" << endl;

    for( int i : a) {
        cout << i << " " ;
    }
    cout << endl; 
    vector<int> l(a) ;
    cout << "printing l :" << endl;

    for( int i : l ) {
        cout << i << " " ;
    } 
    cout << endl; 

}