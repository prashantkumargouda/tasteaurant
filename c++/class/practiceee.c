// using singly linked list and rotating the values

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data ;
    struct node *next;
};

struct node *head = NULL ;
struct node *temp ;

int create( int n ) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node)) ;
    newnode->data = n ;
    newnode -> next = NULL ;

    if( head == NULL ) {
        head = newnode ;
    }
    else {
        temp = head ;
        while( temp -> next != NULL ) {
            temp = temp -> next ; 
        }
        temp->next = newnode ;
    }
}

int display() {
    temp = head ;
    while(temp!=NULL) {
        printf("%d \n" , temp->data) ;
        temp = temp->next ;
    }
}

int main() {
    create(10) ;
    create(20) ;
    create(30) ;
    create(40) ;
    create(50) ;
    display() ;
    return 0 ;
}