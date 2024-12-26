#include <stdio.h>
#include <string.h>

// struct Address {
//     char street[50];
//     char city[50];
//     int zip;
// };

// struct Person {
//     char name[50];
//     int age;
//     struct Address address;
// };

// int main() {
//     // struct Person p1;

//     // // Assigning values to the nested structure
//     // strcpy(p1.name, "John Doe");
//     // p1.age = 30;
//     // strcpy(p1.address.street, "123 Main St");
//     // strcpy(p1.address.city, "Anytown");
//     // p1.address.zip = 12345;

//     // // Printing the values
//     // printf("Name: %s\n", p1.name);
//     // printf("Age: %d\n", p1.age);
//     // printf("Address: %s, %s, %d\n", p1.address.street, p1.address.city, p1.address.zip);

//     struct Address a1 ;

//     strcpy(a1.street , "123 Main St") ; 
//     strcpy(a1.city , "Anytown") ; 
//     a1.zip = 12345 ; 

//     printf("Address: %s, %s, %d\n", a1.street, a1.city, a1.zip);
//     return 0;
// }

struct college{
    char name[50] ;
    int year ;
    struct Address {
        char street[50];
        char city[50];
        int zip;
    } address ;
};

int main() {
    struct college c1 ;

    strcpy(c1.name , "IIT Bombay") ;
    c1.year = 1958 ;
    strcpy(c1.address.street , "Powai") ;
    strcpy(c1.address.city , "Mumbai") ;
    c1.address.zip = 400076 ;

    printf("College Name: %s\n", c1.name);
    printf("Year: %d\n", c1.year);
    printf("Address: %s, %s, %d\n", c1.address.street, c1.address.city, c1.address.zip);

    return 0;
}