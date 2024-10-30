#include <stdio.h>
#include <math.h>


int main() {
    int n;
    printf("enter the value to check:") ;
    scanf("%d",&n) ;

    int count = 0;

    for(int i=0;i<=30;i++) {
        if( n == pow(2,i) ) {
            count += 1;
        }
    }
    if(count == 1) {
        printf(" %d is a power of 2",n);    
    }
    else {
        printf(" %d is not a power of 2",n);
    }
    return 0;
}