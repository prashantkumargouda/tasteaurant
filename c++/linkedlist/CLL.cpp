#include <iostream>
using namespace std ;

class Node{
public :
    int data ;
    Node *next ;
    Node(int x) {
        this -> data = x ;
        this -> next = NULL ;
    }
    ~Node() {
        int value = this -> data ;
        if( next != NULL ) {
            delete next ;
            this -> next = NULL ; 
        }
        cout << "Memory freed for value :" << value << endl ; 
    }

};

void insertNode( Node* &tail , int data , int element ) {
    if( tail == NULL ) {
        Node *newnode = new Node(data) ;
        tail = newnode ;
        newnode -> next = newnode ;
    }
    
    else {
        // some elements present for a non empty linked list 
        Node *curr = tail ;
        while( curr -> data != element ) {
            curr = curr -> next ;
        }
        
        // now create a new node 
        Node *temp = new Node(data) ;
        temp -> next = curr -> next ;
        curr -> next = temp ;
    }
}

void display(Node* &tail) {
    Node* temp = tail ;
    if( tail == NULL ) {
        cout << "List is empty" << endl; 
        return ;
    }
    
    do{
        cout << tail -> data << " " ;
        tail = tail -> next ;
    } 
    while( tail != temp ) ;
    cout << endl; 
} 

void deletion( Node* &tail , int value ) {
    if( tail == NULL ) {
        cout << "CLL is empty nothing to delete" << endl; 
        return ;
    }
    else {
        Node* prev = tail ;
        Node* curr = tail -> next ;
        while( curr->data != value ) {
            prev = curr ;
            curr = curr -> next ;
        }
        // single node linked list 
        if( curr == prev ) {
            tail = NULL ;
        }
        // case with ge 2 nodes 
        else if( tail == curr ) {
            tail = prev ;
        }

        prev -> next = curr -> next ;
        curr -> next = NULL ;
        delete curr ;
    }
}

int main() {
    Node *tail = NULL ;
    insertNode( tail , 3 , 5 ) ;
    display( tail ) ;
    insertNode( tail , 4 , 3 ) ;
    display( tail ) ;
    insertNode( tail , 5 , 4 ) ;
    display( tail ) ;
    insertNode( tail , 6 , 5 ) ;
    display(tail) ;
    insertNode( tail , 7 , 4 ) ;
    display(tail) ;
    deletion(tail , 3) ;
    display(tail) ;
    return 0 ;
}