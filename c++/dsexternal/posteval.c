#include <stdio.h>
#include <ctype.h>

#define max 50 
int stack[max] ;
int post[max] ;
int top = -1 ;

void pushstack(int tmp) {
    stack[top++] = (int)(post[tmp] - 48) ;
}

void calculator( char c ) {
    int a , b , ans ;
    a = stack[top] ;
    stack[top] = '\0' ;
    top--;

    b = stack[top] ;
    stack[top] = '\0' ;
    top-- ;

    switch(c) {
        case '+' :
            return a+b ;
            break ;
        case '-' :
            return a-b ;
            break ;
        case '*' :
            return a*b ;
            break ;
        case '/' :
            return a/b ;
            break;
        case '^' :
            return a^b ;
            break ;
    }
    
}
int main() {
    printf("Enter a postfix exp : \n") ;
    gets(post );

    for( int i=0 ; i<strlen(post) ;i++ ) {
        if( post[i] >= 0 && post[i] <= 9 ) {
            push(i);
        }
        if( post[i] == '+' || post[i] == '-' || post[i] == '*' || post[i] == '/' || post[i] == '^' ) {
            calculator(post[i]) ;
        }
    }

    printf( "result : %d " , stack[top]) ;
    return 0 ;
}