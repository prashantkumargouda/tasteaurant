#include <stdio.h>
#include <ctype.h>
#define size 50 

char s[size] ;
int top = -1 ;

char push(char elem) {
    return s[++top] = elem;
}

char pop() {
    return s[top--];
}

int pr(char elem) {
    switch(elem) {
        case '(' :
            return 0 ;
        case '+' :
            return 1 ;
        case '-' :
            return 1 ;
        case '/' :
            return 2 ;
        case '*' :
            return 2 ;
    }
    return 0 ;
}

void main() {
    char infx[50] , pofx[50] , ch , elem ;
    int i=0 , k=0 ;
    printf("read the infx expression : \n") ;
    scanf("%s" , infx) ;
    push('#') ;

    while( ch= infx[i++] != '\0') {
        if( ch == '(' ) {
            push(ch);
        }
        else if( isalnum(ch) ) {
            pofx[k++] = ch ;
        }
        else if( ch==')' ) {
            while (s[top++]!='(')
            {
                pofx[k++] = pop() ;   
            }
            elem = pop() ;
        }
        else {
            while(pr(s[top]>=pr(ch))) {
                pofx[k++] = pop() ;
            }
            elem = pop() ;
        }
    }

    while( s[top]!='#'){
        pofx[k++] = pop() ;
    }
    pofx[k] = '\0'; 

    printf("postfix exp : %s" , pofx) ;
}
