// book details using string fucntions 

#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    int price ;
    int book_id;
};
struct Book b1 ;
struct Book b2 ;

void display(struct Book b) {
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %d\n", b.price);
    printf("Book ID: %d\n", b.book_id);
}
int main() {
    strcpy( b1.title, "C Programming"); 
    strcpy( b1.author, "Dennis Ritchie"); 

    b1.price = 500;
    b1.book_id = 1; 

    strcpy( b2.title, "Data Structures"); 
    strcpy( b2.author, "Reema Thareja"); 
    b2.price = 600;
    b2.book_id = 2; 

    display(b1); 
    display(b2); 
}