#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data ;
    struct Node *next ;
} ;

struct Node* head = NULL ;

int create( int x ) {
    struct node *newnode = (struct node*) malloc (sizeof(struct node)) ;
    newnode -> data = x ;
    newnode -> next = NULL ;
    if( head == NULL ) {
        head = newnode ;
    }
    else {
        temp = head ;
        while( temp->next != NULL ) {
            temp = temp->next ;
        }
        temp->next = newnode ;
    }
}

int main() {
    int x ;
    printf("Enter values to insert into linked list :") ;
    for( int i = 0  ; i < n ; i++ ) {
        scanf("%d " , &x) ;

    }
}