#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data ;
    struct Node* left ;
    struct Node* right;   
};

struct Node* newnode(int value) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node)) ;

    newnode -> data = value ;
    newnode -> left = NULL ;
    newnode -> right = NULL ;
}

struct Node* insert(struct Node* root , int x) {
    struct Node* temp = newnode(x) ;

    if( root == NULL ) {
        return root ;
    }

    struct Node* curr = root ;
    struct Node* parent = NULL ;

    while( curr != NULL ) {
        parent = curr ;
        if( curr -> data > x ) {
            curr = curr -> left ;
        }
        else if( curr -> data < x ) {
            curr = curr -> right ;
        }

        else {
            return root ;
        }
    }

    if( parent -> data < x ) {
        parent -> right = temp ;
    }
    else {
        parent -> left = temp ;
    }

    return root ;
}

struct Node* inorderPredecessor(struct Node* root) {
    root = root -> left ;
    while( root -> right != NULL ) {
        root = root -> right ;
    }
    return root ;
}

struct Node* deleteNode( struct Node* root  , int value ) {
    if( root == NULL ) {
        return NULL ;
    }

    if( root -> left == NULL && root -> right == NULL ) {
        free(root) ;
        return NULL ;
    }
    struct Node* iPre ;
    // search for the node to be deleted 
    if( value < root -> data ) {
        root -> left = deleteNode( root -> left , value ) ;
    }
    else if( value > root -> data ) {
        root -> right = deleteNode( root -> right , value ) ;
    }
    // deletion strategy 
    else {
        iPre = inorderPredecessor(root) ;
        root -> data = iPre -> data ;
        root -> left = deleteNode(root -> left  , iPre -> data ) ;
    }
    return root ;
}

int search( struct Node* root , int val ) {
    struct Node* temp = root ;
    while( temp != NULL ) {
        if( temp -> data == val ) {
            return 1 ;
        }
        else {
            if( val > temp -> data ) {
                temp = temp -> right ;
            }
            else {
                temp = temp -> left ;
            }
        }    
    }
    return 0 ;
}
void inorder( struct Node* root ) {
    if( root != NULL ) {
        inorder(root -> left) ;
        printf("%d " , root -> data ) ;
        inorder( root -> right ) ;
    }
}

void preorder( struct Node* root ) {
    if( root != NULL ) {
        printf("%d " , root -> data) ;
        preorder(root -> left) ;
        preorder(root -> right) ;
    }
}

void postorder( struct Node* root ) {
    if( root != NULL ) {
        postorder( root -> left ) ;
        postorder( root -> right ) ;
        printf("%d " , root -> data ) ;
    }
}

int main() {
    struct Node* root = newnode(5) ;
    root = insert( root , 3) ;
    root = insert( root , 6) ;
    root = insert( root , 1) ;
    root = insert( root , 4) ;

    inorder(root) ;
    printf("\n") ;
    // preorder(root) ;
    // printf("\n") ;
    // postorder(root) ;

    deleteNode(root , 5) ;
    printf("\n") ;
    printf("root node : %d " , root -> data ) ;
    printf("\n") ;
    inorder(root) ;


    return 0 ;
}