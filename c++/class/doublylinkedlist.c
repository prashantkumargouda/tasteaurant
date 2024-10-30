// doubly linked list 

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data ;
    struct node *prev ;
    struct node *next ;
} ;

struct node *head = NULL ;
struct node *tail ;
struct node *temp ;
struct node *temp1 ;
struct node *temp2 ;

int create( int x ) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
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
        tail = tail -> next ; // or tail = newnode 
    }
}

struct node* reverse() {
    struct node* prev = NULL;
    struct node* current = head;
    struct node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}


int sizelinked() {
    int count = 0;
    temp = head ;
    while( temp != NULL ) {
        count++ ;
        temp = temp -> next ;
    }
    
    return count / 2 ;
}

int midpehlewala( int x ) {
    temp1 = head ;
    
    int i = 0 ;
    while( i < x ) { // x for odd length and x-1 for even length 
        temp1 = temp1 -> next ;
        i++;
    }
    printf("%d " , temp1 -> data ) ;
    printf("\n") ;
}

int fastslowmid() {
    temp1 = head ;
    temp2 = head ;

    while(  temp1 != NULL && temp1->next != NULL ) { // used for both odd and even length LL , fast moves two steps slow moves once at the end as slow moves half the spcaes compared to fast, slow is found at the middle of the LL 
        temp1 = temp1->next->next ;
        temp2 = temp2->next ;
    }
    printf("%d \n", temp2->data ) ;
}

int evenodd() {
    temp1 = head ;
    temp2 = head ;

    while( temp1 != NULL  && temp1 -> next != NULL ) {
        temp1 = temp1 -> next -> next ;
        temp2 = temp2->next ;
    }
    if( temp1 == NULL ) {
        printf("Even \n") ;
    }
    else {
        printf("Odd\n") ;
    }
}

int loop() {
    temp1 = head ;
    temp2 = head ;

    while( temp1 != NULL && temp1->next != NULL ) {
        temp1 = temp1->next->next ;
        temp2 = temp2->next ;
        if( temp1->next == temp2->next ) {
            printf("LOOP\n");
            return 0 ;
        }
        printf("No LOOP\n") ;
    }
}

int midodd() {
    temp1 = head ;
    temp2 = tail ;
    while(1) {
        if( temp1 == temp2 ) {
            printf("%d " , temp1->data) ;
        }
        temp1 = temp1->next ;
        temp2 = temp2->prev ;
    }
}

int mideven() {
    temp1 = head ;
    temp2 = tail ;
    while( temp1 != temp2  && temp1 -> next != temp2) {
        temp1 = temp1 -> next ;
        temp2 = temp2 -> prev ;
    }
    printf("%d " , temp1->data) ;
}

int middlenode() { // middle node for odd no of inputs
    temp1 = head ;
    temp2 = tail ;

    while( 1 ) {
        if( temp1 == temp2 ) {
            printf("%d" , temp1->data) ;
        } 
        temp1 = temp1 -> next  ;
        temp2 = temp2 -> prev ;
    }
}

int linearsearch( int x ) {
    temp = head ;
    int count = 1 ;
    while( temp -> data != x ) {
        count++ ;
        temp = temp->next ;
    }
    printf("%d found \n", temp -> data ) ;
    printf("%u \n", temp -> next) ;
    printf("element found at %d \n", count ) ;
}

int display() {
    temp = head ;
    while( temp != NULL ) {
        printf("%d ", temp->data) ;
        temp = temp -> next ;
    }
    printf("\n") ;
}


int rev_display() {
    temp = tail ;
    while( temp != NULL ) {
        printf(" %d " , temp->data ) ;
        temp = temp -> prev ;
    }
    printf("\n") ;
}

int dual() {
    temp1 = head ;
    temp2 = head->next  ;

    while( temp2 != NULL ) {
        printf("%d %d" , temp1->data , temp2->data) ;
        printf("\n") ;
        temp1= temp1->next ;
        temp2 = temp2->next ;
    }
}
int factorial() {
    temp = head ;
    while( temp != NULL ) {
        int n = 1 ;
        for( int i =2 ; i <= temp->data ; i++ ) {
            n = n * i ;
        }
        printf("%d " , n ) ;
        temp = temp -> next ; 
    }
    printf("\n") ;
}

int bubble_sort(){
    temp = head ;
    int te ;
    while( temp ->next != NULL ) {
        temp1=head ;
        while( temp1 -> next != NULL ) {
            if( temp1 -> data > temp1 -> next -> data ) {
                te = temp1 -> data;
                temp1 -> data = temp1->next->data;
                temp->next->data = te ;
            }
            temp1 = temp1->next ;
        }
        temp = temp->next ;
    }
}

int main() {
    create(6) ;
    create(5) ;
    create(4) ;
    create(3) ;
    create(2) ;
    create(1) ;
    display() ;
    // dual() ;  
    // int z = sizelinked() ;
    // printf("%d\n" , z) ;
    // midpehlewala( z ) ; 
    // fastslowmid() ;
    // evenodd() ;
    // factorial() ;
    // bubble_sort() ;
    // display() ;
    reverse() ;
    display() ;
    return 0 ;
}

