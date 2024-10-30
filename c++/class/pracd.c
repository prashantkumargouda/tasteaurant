// doubly linked list 
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data ;
    struct node *next ;
    struct node *prev ;
} ;

struct node *head = NULL ;
struct node *tail = NULL ;
struct node *temp ;
struct node *t ;

int create( int x ) {
    struct node *newnode = (struct node*) malloc (sizeof(struct node)) ;
    newnode -> data = x ;
    newnode -> next = NULL ;
    newnode -> prev = NULL ;

    if( head == NULL ) {
        head = newnode ;
        tail = newnode ;
    }
    else {
        newnode -> prev = tail ;
        tail -> next = newnode ;
        tail = newnode ;
    }
}

int display() {
    temp = head ;
    while( temp != NULL ) {
        printf("%d " , temp->data) ;
        temp = temp->next ;
    }
    printf("\n") ;
}

int rev_display() {
    temp = tail ;
    while(temp != NULL ) {
        printf("%d " , temp->data) ;
        temp = temp->prev ;
    }
    printf("\n") ;
}

// find the max value of a linked list 
// using max variable 
// traverse and replace max value 

int maxL() {
    int max = 0;
    temp = head ;
    while( temp != NULL ) {
        if( temp->data > max ) {
            max = temp->data ;
            temp = temp->next ;
        } 
    }
    printf("%d" , max ) ;
}

// sorting a linked list 

int sorting() {
    temp = head ;
    t = head -> next ;
    while( temp != NULL ) {
        if( temp -> data > t -> data ) {
            
        }
    }
}

int main() {
    create(10) ;
    create(20) ;
    create(23) ;
    create(34) ;
    display() ;
    rev_display();
    maxL() ;
    return 0 ;
}

