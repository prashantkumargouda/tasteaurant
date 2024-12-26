// array of structures 

#include <stdio.h> 

struct emp {
    char name[20] ;
    int phone ;
    int age ;
} ;

struct emp e[2] ; 

int main() {
    for (int i = 0 ; i < 2 ; i++) {
        printf("Enter e[%d] values : \n" , i) ;
        // taking inputs from user for e3 structure variable 
        scanf("%s %d %d" , e[i].name , &e[i].phone , &e[i].age ) ; 
    }

    for (int i = 0 ; i < 2 ; i++) {
        printf("Employee %d: %s, %d, %d\n", i , e[i].name, e[i].phone, e[i].age);
    }

    return 0;
}