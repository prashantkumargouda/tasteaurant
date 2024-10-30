// // finding the middle of a linked list in c++ 
// #include <iostream>
// #include <vector> 
// using namespace std ;

// class Node {
// public :
//     int data;
//     Node *next ;

//     // constructor to initialize a new node with data 
//     Node( int new_data ) {
//         this -> data = new_data ;
//         this -> next = nullptr ;
//     }
// } ;

// // function to find the middle of the linked list 

// int getMid( Node* head ) {
    
//     vector<int> arr ;
//     // traversing the linked list and adding all the values into the array arr ;

//     while( head != NULL ) {
//         arr.push_back( head -> data ) ;
//         head = head -> next ;
//     }

//     int mid_index = arr.size() / 2 ;

//     return arr[mid_index] ;
// }

// int main() {
//     Node *head = new Node(10) ;
//     head -> next = new Node(20) ;
//     head -> next -> next = new Node(40) ;
//     head -> next -> next -> next = new Node(50) ; 
//     head -> next -> next -> next -> next = new Node(60) ;
//     head -> next -> next -> next -> next -> next = new Node(70) ;
//     cout << " Middle of the node " << getMid( head ) << endl; 
//     return 0 ;
// }







#include <iostream> 
using namespace std ;

class Node {
public :
    int data ;
    Node* next ;

    Node(int value) { // constructor 
        this -> data = value ;
        this -> next = NULL ;
    }

    ~Node() { // deconstructor
        int value = this -> data ;

        if ( this -> next != NULL ) {
            delete next ;
            this -> next = NULL ;
        }

        cout << "the value deleted by deconstructor : " << value << endl; 
    }
};

void display(Node* &head) {
    Node* temp = head ;

    while(temp != NULL) {
        cout << temp -> data << " " ;
        temp = temp -> next ;
    }
    cout << endl; 
}

void add_back(Node* &tail , int data) {
    Node* temp = new Node(data) ;

    tail -> next = temp ;
    tail = tail -> next ; // or temp 
}

void add_front( Node* &head , int data ) {
    Node* temp = new Node(data) ;

    temp -> next = head ;
    head = temp  ;
}

void add_any(Node* &head , Node* &tail , int data , int pos) {
    Node* temp = head ;

    int count = 1 ;

    if( pos == 1 ) {
        add_front(head,data) ;
        return ;
    }
    while( count < pos -1 ) {
        temp = temp -> next ;
        count++ ;
    }

    if ( temp -> next == NULL ) {
        add_back(tail , data) ;
        return ;
    }

    Node* nodetoinsert = new Node(data) ;
    nodetoinsert -> next = temp -> next ;
    temp -> next = nodetoinsert ;

}

void reverse(Node*&head) {
    Node* prev = NULL ;
    Node* curr = head ;
    Node* next = NULL ;

    while(curr != NULL ) {
        next = curr -> next ;
        curr -> next = prev ;
        prev = curr ;
        curr = next ;
    }
}

void revrec(Node*&head, Node* curr, Node* prev) {
    // base condition 
    if( curr == NULL ) {
        head = prev ;
        return ;
    }

    Node* next = curr -> next ;
    revrec( head , next , curr ) ; 
    curr -> next = prev ;
}
    
int main() {

}