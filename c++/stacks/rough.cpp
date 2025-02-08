#include <iostream>
#include <map>
using namespace std ;

class Node {
public :
    int data ;
    Node* next ;

    Node(int val) {
        this -> data = val ;
        this -> next = NULL ;
    }
    ~Node
}