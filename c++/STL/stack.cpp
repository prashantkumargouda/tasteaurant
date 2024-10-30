// stack 

#include <iostream>
#include <stack>
using namespace std ;

int main() {
    stack<string> s ;
    s.push("Prashant") ;
    s.push("Kumar");
    s.push("Gouda") ;

    cout << "first element inside the stack :" << s.top() << endl;
    s.pop() ;
    cout << "first element inside the stack :" << s.top() << endl;

    cout << "size of stack :" << s.size() << endl;

    cout << "empty or not : " << s.empty() << endl;
    
}