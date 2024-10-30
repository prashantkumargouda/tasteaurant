// queue using linked list 

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data ;
    struct Node *next ;
};

struct Node *front = NULL ;
struct Node *rear = NULL ;

void push(int value) {
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node)) ;
    newnode -> data = value ;
    newnode -> next = NULL ;
    if( front == NULL ) {
        front = rear = newnode ;
    }
    else {
        rear -> next = newnode ;
        rear = newnode ;
    }
}

void pop() {
    if( front == NULL ){
        printf("Queue is empty nothing to display\n") ;
    }
    else {
        struct Node *temp = front ;
        printf("Deleted element : %d\n" , temp -> data ) ;
        front = front -> next ;
        free(temp) ;
    } 
}

void display() {
    if( front == NULL ) {
        printf("queue empty nothing to display\n") ;
    }
    else {
        struct Node *temp = front ;
        while( temp != NULL ) {
            printf("%d " , temp -> data ) ;
            temp = temp -> next ;
        } 
    }

    printf("stack displayed\n") ;
}

int main() {
    push(10) ;
    push(20) ;
    push(49) ;
    push(82) ;
    push(30) ;
    pop() ;
    pop() ;
    display() ;
    return 0 ;
}