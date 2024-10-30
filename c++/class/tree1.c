#include <stdio.h>
#include <stdlib.h>

int l , r ;

struct Node {
    int data ;
    struct Node *left ;
    struct Node *right ;
};

struct Node *root = NULL ;

struct Node* create(int x) {
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node)) ;
    newnode -> data = x  ;
    newnode -> left = NULL ;
    newnode -> right = NULL ;
    
    return newnode ;
}

int height(struct Node *ro) {
    if( ro == NULL ) {
        return -1 ;
    }
    l = height( ro -> left ) ;
    r = height( ro -> right) ;
    if( l > r ) {
        return l + 1;
    }
    else {
        return r + 1 ;
    }
}

int inorder(struct Node *ro) {
    if(ro!=NULL) {
        inorder(ro->left) ;
        printf("%d " , ro->data) ;
        inorder( ro->right) ;
    }
}

int preorder(struct Node *ro) {
    if(ro!=NULL) {
        printf("%d " , ro->data) ;
        preorder(ro->left) ;
        preorder(ro->right) ;
    }
}
int postorder(struct Node *ro) {
    if(ro!=NULL) {
        postorder(ro->left) ;
        postorder(ro->right) ;
        printf("%d " , ro->data) ;
    }
}

int sum(struct Node *ro) {
    if( ro == NULL ) {
        return 0 ;
    }
    return ro->data + sum(ro->left) + sum( ro->right) ;

}

int evensum(struct Node *ro) {
    if(ro == NULL ) {
        return 0 ;
    }
    else if(ro->data % 2 == 0 ) {
        return ro->data + evensum(ro->left) + evensum(ro->right) ;
    }
    else {
        return evensum(ro->left) + evensum(ro->right) ;
    }
}
int main() {
    root = create(10);
    root -> left = create(5) ;
    root -> right = create(15) ;
    root -> left -> left = create(2) ;
    root -> right -> left = create(12) ;
    root -> left -> left -> right = create(3) ;
    
    inorder(root) ;
    printf("\n") ;
    preorder(root) ;
    printf("\n") ;
    postorder(root) ;
    // inorder - 2 3 5 10 12 15 
    // pre - 10 5 2 3 15 12 
    // post - 3 2 5 12 15 10 
    printf("\n") ;
    int z = sum(root) ;
    printf("%d" , z) ;
    printf("\n") ;
    printf("%d" ,evensum(root));
    printf("\n") ;
    printf("%d" , height(root)) ;

}