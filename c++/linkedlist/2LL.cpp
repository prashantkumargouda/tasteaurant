#include <iostream>
using namespace std ;

class Node {
public :
    int data ;
    Node *next ;
    // constructor 
    Node( int x ) {
        this -> data = x ;
        this -> next = NULL ;
    }
    // checking for git
    // destructor for linked list 
    ~Node() {
        int value = this -> data ;
        // memory free 
        if( this -> next != NULL ) {
            delete next ;
            this -> next = NULL ;
        }
        cout << "memory freed for value :" << value << endl; 
    }
};

void display(Node* &head) {
    Node *temp = head ;
    while( temp != NULL ) {
        cout << temp -> data << " "; 
        temp = temp -> next ;
    }
    cout << endl; 
}
 
void add_front( Node* &head , int d ) {
    // first creating a new node for the new element 
    Node *temp = new Node(d) ;  
    temp -> next = head ;
    head = temp ;
} 

void add_back( Node* &tail , int data ) {
    // creating a new node 
    Node *temp = new Node(data) ;
    tail -> next = temp ;
    tail = temp ; // or tail->next ;
}

void add_any( Node* &head , Node* &tail , int data , int pos ) {
    Node *temp = head ;
    // adding at the front 
    if( pos == 1 ) {
        add_front( head , data ) ;
        return ;
    }
    
    int count = 1 ;
    while( count < pos - 1 ) {
        temp = temp -> next ;
        count++;
    }
    
    // if element to be added at the back 
    if( temp -> next == NULL ) {
        add_back( tail , data ) ;
        return ;
    }
    
    Node *nodetoinsert = new Node(data) ;
    nodetoinsert -> next = temp -> next ;
    temp -> next = nodetoinsert ;
    
}
void rotate( Node* &head , int k) {
    if( head == NULL || head -> next == NULL || k == 0 ) {
        return ;
    }
    
    int count = 0 ;

    Node *temp = head ;
    while( temp != NULL ) {
        count++ ;
        temp = temp -> next ;
    }

    k = k % count ;

    while( k!=0 ){
        Node* curr = head ;
        Node* prev = NULL ;
        while( curr -> next != NULL ) {
            prev = curr ;
            curr = curr -> next ;
        }

        prev -> next = NULL ;
        curr -> next = head ;
        head = curr ;
        k-- ;
    }
}
void reverse(Node* &head) {
    Node* prev = NULL ;
    Node* curr = head ;
    Node* next = NULL ;
    while( curr != NULL ) {
        next = curr -> next ;
        curr -> next = prev ;
        prev = curr ;
        curr = next ;    
    }
}

// void revrec( Node* &head , Node* curr , Node* prev ) {
//     // base condition 
//     if( curr == NULL ) {
//         head = prev ;
//         return ;
//     }
    
//     Node* next = curr -> next ;
//     revrec( head , next , curr ) ;
//     curr -> next = prev ;
// }

void deletion( Node* &head ,Node* &tail , int pos ) {
    // deleting the first node
    if( pos == 1 ) {
        Node *temp = head ;
        head = head -> next ;
        temp -> next = NULL ; // before deletion setting the deleted pointer to NULL 
        delete temp ;
    }
    else {
        // deleting any middle or last node 
        int count = 1 ;
        Node* curr = head ;
        Node* prev = NULL ;
        while( count < pos ) {
            prev = curr ;
            curr = curr-> next ;
            count+=1 ;
        }
        if( curr -> next == NULL ) {
            prev -> next = NULL ;
            tail = prev ;
            delete curr ;
        }
        else {
            prev -> next = curr -> next ;
            curr -> next = NULL ; // before deletion setting the deleted pointer to NULL 
            delete curr ;
        }
    } 
}

void duplicate( Node* &head ) {
    Node *curr = head ;
    if( head == NULL || head -> next == NULL )  {
        return ;
    }
    
    while( curr != NULL && curr -> next != NULL ) {
        if( curr -> data == curr -> next -> data ) {
            Node *next = curr -> next -> next ;     
            curr -> next = NULL ;
            delete curr -> next ;
            curr -> next = next ;
        }
        else {
            curr = curr -> next ;
        }
    }
}

void centre( Node* &head ) {
    Node* slow = head ;
    Node* fast = head ;
    
    while( fast != NULL && fast -> next != NULL ) {
        slow = slow -> next ;
        fast = fast -> next -> next ;
    }
    
    cout << slow -> data << endl ;
}
void doubly(Node* &head) {
    Node* prev = NULL ;
    Node* curr = head ;
    Node* temp = NULL ;
    while (curr -> next != NULL) {
        temp = curr -> next ;
        curr -> next = prev ;
        prev = curr ;
        curr = temp ;
    }   
}

void reverseinK()


int main() {

    Node *Node1 = new Node(10) ;
    Node *head = Node1 ;
    Node *tail = Node1 ;
    add_back( tail , 20 ) ;
    add_back( tail , 30 ) ;
    add_back( tail , 40 ) ;
    add_back( tail , 50 ) ;
    add_back( tail , 60 ) ;
    // add_any( head , tail , 11 ,5 ) ;
    
    // reverse(head) ;
    doubly(head) ;
    display( head ) ;
    // rotate( head , 2) ;
    // duplicate(head) ;
    // display(head) ;
    // centre( head ) ;
    // cout << "head" << head -> data << endl;
    // cout << "tail" << tail -> data << endl;
    // deletion( head ,tail , 5 ) ;
    // display(head) ;
    // cout << "head" << head -> data << endl;
    // cout << "tail" << tail -> data << endl;
    
    return 0 ;
}   