// pollution check 
// even hai toh fine daal saale ko 

#include <stdio.h>

int even( int n ) {
    if(n % 2 == 0 ) {
        return 1 ;
    }
    else {
        return 0 ;
    }
}

int main() {
    
    int fine = 0 ;

    int date ;
    printf("enter date :") ;
    scanf("%d" , &date) ;

    int car_no[5] ;
    printf("Enter car no :") ;
    for( int i = 0 ; i < 5 ; i++ ) {
        scanf( "%d" , &car_no[i] );
    }

    for( int i = 0 ; i < 5 ; i++ ) {
        if (( even(date) && even(car_no[i])) ) {
            printf("NO FINE for : %d \n" , car_no[i])  ;  
        }
        else {
            fine = fine + 1000 ;
        }
    }
    printf("fine : %d \n" , fine ) ;
    return 0 ;
}