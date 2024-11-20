#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data ;
    struct Node *next ;
};

struct Node* head = NULL ;
struct Node* temp ;

int create( int x ) { // x = 1 2 3 4 5
    struct Node *newnode = (struct Node*) malloc (sizeof(struct Node)) ;
    newnode -> data = x ; // box(x , ) 
    newnode -> next = NULL ;

    if( head == NULL ) {
        head = newnode ;
    }
    else {
        temp = head ;
        while( temp -> next != NULL ) {
            temp = temp->next ;
        }

        temp -> next = newnode ;
    }
}

int display() {
    temp = head ;
    while( temp != NULL ) {
        printf( "%d \t " , temp -> data ) ;
        temp = temp -> next ;
    }
}

int add_front(int x) {
    struct Node* newnode = (struct Node*) malloc (sizeof(struct Node)) ;
    newnode -> data = x ;
    newnode -> next = NULL ;
    if( head == NULL ) {
        head = newnode ;
    }
    else {
        newnode -> next = head ;
        head = newnode ;
    }
}

int count() {
    temp = head ;
    int count = 0 ;
    while( temp != NULL ) {
        count += 1 ;
        temp = temp -> next ;
    }
    printf("\n%d" , count ) ;
}

int main() {
    create(1) ;
    create(2) ;
    create(3) ;
    create(4) ;
    add_front(0) ;
    add_front(-1) ;
    add_front(10) ;
    display() ;
    count() ;
    return 0 ; 
}

