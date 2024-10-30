#include <stdio.h>
#define MAX_STRINGS 10 
#define MAX_LENGTH 20 

void sayDigit( int n ) {
    char arr[MAX_STRINGS][MAX_LENGTH] = {"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine" } ;

    if( n == 0 ){
        return  ;
    }

    int digit = n % 10;
    n = n / 10 ;

    sayDigit( n ) ;
    printf("%s " , arr[digit]  );
    

}

int main() {
    // char arr[MAX_STRINGS][MAX_LENGTH] = {"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine" } ;
    int n ;
    printf("Enter the value of n :") ;
    scanf("%d" , &n) ;
    printf("\n") ;
    sayDigit( n ) ;
    printf("\n");
    return 0 ;
}