// tree

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data ;
    struct node *prev ;
    struct node *next ;
};

struct node *head = NULL ;
struct node * tail ;
struct node *temp ;

int create(int x) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node)) ;
    newnode -> prev = NULL ;
    newnode -> next = NULL ;
    newnode -> data = x ;

    if(head == NULL) {
        head = newnode ;
        tail = newnode ;
    }
    else {
        if( head -> data > newnode->data ) {
            newnode -> prev = head ;
        }
        else {
            newnode -> next = head ;
        }
    }
}

// int display_rev() {
//     temp = tail ;
//     while( temp != NULL ) {
//         printf("%d " , temp->data) ;
//         temp = temp -> prev ;
//     }

// }


int main() {
    create(10) ;
    create(20) ;
    create(30) ;
    create(40) ;
    create(50) ;
    // display_rev() ;
    return 0 ;
}