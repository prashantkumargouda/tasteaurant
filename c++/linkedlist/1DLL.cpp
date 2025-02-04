#include <iostream>
#include <map> 
using namespace std ;

class Node {
public:
    int data ;
    Node *prev ;
    Node *next ;
    
    // constructor 
    Node(int x) {
        this -> data = x ;
        this -> prev = NULL ;
        this -> next = NULL ;
    }
    
    // deconstructor ;
    ~Node() {
        int value = this -> data ;
        // memory free 
        if( this -> next != NULL ) {
            delete next ;
            this -> next = NULL ;
        }
        cout << "memory freed for value : " << value << endl;
    }
} ;

void display(Node *head) {
    Node *temp = head ;
    while( temp != NULL ) {
        cout << temp -> data << " " ;
        temp = temp -> next ;
    }
    cout << endl; 
}

int getLength(Node *head) {
    int count = 0 ;
    Node *temp = head ;
    while( temp != NULL ) {
        temp = temp -> next ;
        count++ ;
    }
    return count ;
} 

void add_front( Node* &head ,Node* &tail , int data ) {
    if( head == NULL ) {
        Node *temp = new Node(data) ;
        head = temp ;
        tail = temp ;
    }
    else {
        Node *temp = new Node(data) ;
        temp -> next = head ;
        head -> prev = temp ;
        head = temp ;
    }
}

void add_back( Node* &tail ,Node* &head ,  int data ) {
    if( tail == NULL ) {
        Node *temp = new Node(data) ;
        tail = temp ;
        head = temp ;
    }
    Node* temp = new Node(data)  ;
    tail -> next = temp ;
    temp -> next = NULL ;
    tail = temp ;
}

void add_any(Node* &head , Node* &tail , int data , int pos ) {
    Node *temp = head ;
    if( pos == 1 ) {
        add_front(head,tail,data) ;
        return ;
    }
    else {
        int count = 1 ;
        while( count < pos-1 ) {
            temp = temp -> next ;
            count++ ;
        }
        
        if( temp -> next == NULL ) {
            add_back(tail ,head , data) ;
        }
        else {
            Node *nodetoinsert = new Node(data) ;
            nodetoinsert -> next = temp -> next ;
            temp -> next -> prev = nodetoinsert ;
            temp -> next = nodetoinsert ;
            nodetoinsert -> prev = temp  ;
        }
    }
}

void deletion( Node* &head  , int pos ) {
    if( pos == 1 ) {
        Node *temp = head ;
        temp -> next -> prev = NULL ;
        head = temp -> next ;
        temp -> next = NULL ;
        delete temp ;
    }
    else {
        Node *curr = head ;
        Node *prev = NULL ;
        int count = 1 ; 
        
        while( count < pos ) {
            prev = curr ;
            curr = curr -> next ;
            count+=1 ;
        }
        curr -> prev = NULL ;
        prev -> next = curr -> next ;
        curr -> next = NULL ;
        delete curr ;
    }
}

bool isCircular(Node* &head) {
    if( head == nullptr ) {
        return head ;
    }

    Node* temp = head -> next ;

    while( temp != NULL && temp != head ) {
        temp = temp -> next ;
    }

    if( temp == head ) {
        return true ;
    } 

    return false ;
}

Node* floyd(Node* &head) {
    if( head == NULL ) {
        return NULL ;
    }

    Node* slow = head ;
    Node* fast = head ;

    while( slow != nullptr && fast != NULL ) {
        slow = slow -> next ;
        fast = fast -> next  ;

        if( fast != NULL ) {
            fast = fast -> next ;
        }

        if( slow == fast ) {
            return slow ;
        }
    }

    return NULL ;
}

bool detectLoop2(Node* &head) {
    if( head == nullptr ) {
        return head ;
    }

    map<Node* , bool> visited ;

    Node* temp = head ;
    
    while( temp != nullptr ) {
        if(visited[temp] == true) {
            return true ;
            break ;
        }
        visited[temp] = true ;
        temp = temp -> next ;
    }

    return false ;
}

Node* getStartingNode(Node* &head) {
    if( head == NULL ) {
        return NULL ;
    }

    Node* slow = head ;
    Node* intersection = floyd(head) ;

    while( slow != intersection ) {
        slow = slow -> next ;
        intersection = intersection -> next ;
    }

    return slow ;
}

void removeLoop(Node* &head) {
    Node* start = getStartingNode(head) ;
    Node* temp = start ;

    while( temp->next != start ) {
        temp = temp -> next ;
    }

    temp -> next = NULL ;
}

void deleteNodewithoutHead(Node* node) {
    node -> data = node -> next -> data ;
    node -> next = node -> next -> next ;
}



int main() {
    Node *head = NULL ;
    Node *tail = NULL ; 
    cout << "length :" << getLength(head) << endl; 
    add_front( head , tail  , 9 ) ;
    add_any( head , tail , 10 , 2  ) ;
    add_back( tail , head ,11 ) ;
    add_any( head , tail , 18 , 2 ) ;
    add_any( head , tail , 19 , 3 ) ;
    display(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    deletion( head , 3) ;
    display(head) ;
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    cout << "length :" << getLength(head) << endl; 
    return 0 ;
}
