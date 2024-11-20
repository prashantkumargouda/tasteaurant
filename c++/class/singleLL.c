#include <stdio.h>
#include <stdlib.h>

struct node {
    int data ;
    struct node *next ;
};

struct node *head = NULL;
struct node *temp ;

int create( int x ) {
    struct node *newnode = (struct node*) malloc ( sizeof(struct node)) ;
    newnode -> data = x;
    newnode -> next = NULL ;
    if( head == NULL ) {
        head = newnode ;
    }
    else {
        temp = head ;
        while( temp->next != NULL ) {
            temp = temp -> next ;
        }
        temp->next = newnode ; // this is the second last node storing the address of last newnode created as newnode 
    }
}
int add_front(int x) {
    struct node *newnode = (struct node*) malloc ( sizeof(struct node));
    newnode -> data = x ;
    newnode -> next = NULL;

    if( head == NULL ) { // head == NULL empty linked list 
        head = newnode ;
    }
    else {
        newnode -> next = head ;
        head = newnode ;
    }
}

int display() {
    temp = head ;
    while( temp != NULL ) {
        printf("%d\t" , temp->data) ;
        temp = temp -> next ; // here temp stores the address of last variable conatined in the second last node address pack
    }
}
int sum() {
    int sum = 0 ;
    temp = head ;
    while( temp != NULL ) {
        sum = sum + temp -> data ;
        temp = temp->next ;
    }
    printf("\n%d" , sum) ;
}
int sum_even() {
    int sum = 0;
    temp = head ;
    while( temp != NULL ) {
        if( temp -> data % 2 == 0 ) {
            sum = sum + temp -> data ;
        }
        temp = temp -> next ;
    }

    printf("\n%d" , sum ) ;
}
int main() {
    create(10) ;
    add_front(13) ;
    add_front(15) ;
    create(20) ;
    create(30) ;
    display() ;
    sum() ;
    sum_even() ;
    return 0 ;
}
