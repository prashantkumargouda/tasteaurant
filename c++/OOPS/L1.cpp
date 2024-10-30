#include <iostream>
#include <string>

using namespace std ;

// class person {
// public :
//     string name ;
//     int age ;

//     void introduce(){
//         cout << "My name is : " << name << " and my age is : " << age << endl; 
//     } 

// };

// class geeks {
// private :
//     // private data member can be accessed inside the class only if used with dot operator in main error 
//     string geek_name ;
// public :
//     void setname( string name ) {
//         geek_name = name ;
//     }

//     void intro() {
//         cout << "My name is : " << geek_name << endl; 
//     }
// };

// class geeks {
// public :
//     string geekname ;
//     int id ;
    
//     void printname() ;

//     void printid() {
//         cout << "My id is :" << id << endl;
//     }
// };

// void geeks::printname() {
//     cout << "My name is :" << geekname << endl;
// }

// using constructors 

class geeks {
    public :
        int id ;
        geeks() {
            cout << "default constructor without any value :" << endl;
            id = -1 ;
        }

        // parametrized constructor takes arguments 

        geeks(int x) {
            cout << "parametrized constructor " << endl;
            id = x ;
        }
};

int main() {
    // person person1 ;
    // person1.name = "Prashant" ;
    // person1.age = 19 ;

    // person1.introduce() ; 

    // geeks obj;
    // string name1 = "Prashant" ;
    // obj.setname(name1) ;
    // obj.intro() ;

    // geeks person1 ;

    // person1.geekname = "Prashant" ;
    // person1.id = 49 ;

    // person1.printname() ;
    // person1.printid() ;

    geeks obj1 ;
    cout << " id :" << obj1.id << endl;

    geeks obj2(21) ;
    cout << " id using parametrized constructor" << obj2.id << endl;  
    return 0 ;
}