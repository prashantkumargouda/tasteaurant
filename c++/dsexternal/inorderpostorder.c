#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value ;
    struct Node* left ;
    struct Node* right ;
};

struct Node* root = NULL ;

struct Node* insert( struct Node* r , int data ) {
    r = ( struct Node* )malloc(sizeof(struct Node)) ;
    if( r==NULL ) {
        r -> value = data ;
        r -> left = NULL ;
        r -> right = NULL ;
    }
    else if( data < r -> value ) {
        r -> left = insert( r->left , data ) ;
    }
    else {
        r -> right = insert( r->right , data ) ;
    }
    return r ;
}

void inorder( struct Node* root ) {
    if( root!=NULL ) {
        inorder(root->left) ;
        printf("%d" , root->value) ;
        inorder(root->right) ;
    }
}

void postorder( struct Node* root ){
    if( root!=NULL ) {
        postorder( root->left) ;
        postorder(root->right) ;
        printf("%d" , root->value) ;
    }
}


int main() {
    int n ;
    int r ;
    printf("Enter the no of elements to insert: \n") ;
    scanf("%d " , &n );

    for( int i=0 ; i < n ; i++ ) {
        printf("Enter the element to insert :") ;
        scanf("%d" , &r ) ;
        root = insert( root  , r ) ;
    }


}