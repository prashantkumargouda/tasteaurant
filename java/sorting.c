#include <stdio.h>

// pass by reference 

// functiokn prototype 
void swap(int *a , int *b ) ;

// function definition
void swap(int *a , int *b ) {
    int temp = *a ;
    *a = *b ;
    *b = temp  ;

    printf("a = %d , b = %d" , *a , *b ) ; 
    
}
int main() {
    int a = 10 ;
    int b = 20 ;

    swap( &a , &b ) ;

    printf("a = %d , b = %d" , a , b ) ; 
    return 0 ;
}