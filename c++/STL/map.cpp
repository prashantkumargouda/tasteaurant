// map 

// ds : stored in the form of key value pairs

#include <iostream>
#include <map> 
using namespace std ;

int main() {
    map <int , string > m ;
    
    m[1] = "Prashant" ;
    m[2] = "kumar" ;
    m[30] = "Gouda" ;

    m.insert( {5,"RApth"} ) ;
    for( auto i : m ) {
        cout << i.first << " " ;
    }
    cout << endl;


    for( auto i : m )  {
        cout << i.first << " " << i.second << endl; 
    }
    
    cout << "Count if 30 present or not ->  " << m.count(30) << endl;

    cout << "Before erase :" << endl;

    for( auto i : m ) {
        cout << i.first << " "  << i.second << endl;
    } 

    m.erase(30) ;
    cout << "after erase :" << endl;
    for( auto i : m ) {
        cout << i.first << " "  << i.second << endl;
    } 

    // using iterator 

    auto it = m.find(5) ;

    for( auto i = it ; i != m.end() ; i++ ) {
        cout << (*i).first << endl;
    }

    return 0 ;

}