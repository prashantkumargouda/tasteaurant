// towers of hanoi 

#include <stdio.h>

void hanoi( char from , char to , char other ,int n ) {
    if( n==0 ) {
        printf("Invalid no of disks\n") ;
    }
    if( n==1 ) {
        printf("Move disks from %c to %c \n " , from , other ) ;
    }
    if( n > 1 ) {
        hanoi( from , other , to , n-1 ) ;
        hanoi( from , to ,other , 1 ) ;
        hanoi( to , from , other , n-1 ) ;
    }
}

int main() {
    int num ;
    scanf("%d" ,&num) ;

    printf("towers of hanoi for %d no of disks :" , num ) ;

    hanoi( 'A' , 'B' , 'C' , num ) ;
    return 0 ;

}
