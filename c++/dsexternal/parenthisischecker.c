// parenthesis checker 

#include <stdio.h> 

int main() {
    char exp[50] ;
    printf("Enter an expression : \n") ;
    int x = 0 ; int i = 0 ;
    scanf("%s", exp) ;

    while( exp[i] != '\0' ) {
        if( exp[i] == '(') {
            x++ ;
        }
        else if( exp[i] == ')') {
            x-- ;
            if( x<0 ) {
                break;
            }
        }
        i++ ;
    }

    if( x == 0 ) {
        printf("Expression is balanced \n ") ;
    }
    else{
        printf("Expression is not balanced \n") ;
    }

    return 0 ;
}