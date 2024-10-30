#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data ;
    struct Node *next ;
};

struct Node *top = NULL ;

void push(int value) {
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node)) ;
    newnode -> data = value ;
    newnode -> next = NULL ;

    if( top == NULL ) {
        top = newnode ;
    }
    else {
        newnode -> next = top ;
        top = newnode ;
    }
}

void pop() {

    if( top == NULL ) {
        printf("stack is empty nothing to delete \n") ;
    }
    
    else {
        struct Node* temp = top ;
        printf("Deleted top is : %d\n" , temp -> data ) ;
        top = top -> next ;
        free(temp) ;
    }

}

void display() {
    if( top == NULL ) {
        printf("Stack is empty nothing to display\n") ;
    }
    struct Node *temp = top ;
    while( temp != NULL ) {
        printf("%d " , temp -> data ) ;
        temp = temp -> next ;
    }
    printf("stack displayed") ;
}

int main() {
    push(10) ;
    push(20) ;
    push(30) ;
    pop() ;
    display() ;
    return 0 ;
}