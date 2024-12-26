#include <stdio.h>


// struct emp {
//     char name[20] ;
//     int age ;
//     int phone ;
// } ;

// struct emp {
//     char name[20] ;
//     int age ;
//     int phone ;
//     int salary ;
// } e1 , e2 , e3 ;

struct emp {
    char name[20];
    int phone ;
    int age ;
} e1 , e2 , e3 ;  

int main() {
    struct emp e3 ;
    struct emp e1 = { "Rahul" , 1234567890 , 20 } ; 
    struct emp e2 = { "Rohit" , 1234567890 , 21 } ; 
    
    printf("Enter e3 values : \n") ;
    // taking inputs from user for e3 structure variable 
    scanf("%s %d %d" , e3.name , &e3.phone , &e3.age ) ; 

    printf("Employee 1: %s, %d, %d\n", e1.name, e1.phone, e1.age);
    printf("Employee 2: %s, %d, %d\n", e2.name, e2.phone, e2.age);
    printf("Employee 3: %s, %d, %d\n", e3.name, e3.phone, e3.age); // garbage values

    return 0;
}
