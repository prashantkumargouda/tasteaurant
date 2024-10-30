// STL 
// standard template libraries 

#include <iostream>
#include <array>
using namespace std ;

int main() {
    int arr[5] = {1,2,3,4,5} ;
    array<int,4> a = {1,2,3,4} ;

    int size = a.size() ;
    for( int i = 0 ; i < size ; i++ ) {
        cout << a[i] << endl;
    }

    cout << "Element at 2nd index : " << a.at(2) << endl;
    cout << "Element is empty or not : " << a.empty() << endl;
    cout << "first element : " << a.front() << endl;
    cout << "last element : " << a.back() << endl; 

    return 0 ;
}