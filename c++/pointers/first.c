// pointers 

#include <stdio.h>


// C program to illustrate sizes of
// pointer of array
#include<stdio.h>

int main()
{
    // Pointer to an integer
    
    // Pointer to an array of 5 integers
    int (*ptr)[5]; 
    int arr[5] = {1,2,3,4,5};
    
    // Points to 0th element of the arr.
    int *p = arr;
    
    // Points to the whole array arr.
    ptr = &arr; 
    
    printf("p = %u, ptr = %u\n", p, ptr);
    
    p++; 
    ptr++;
    
    printf("p = %d, ptr = %d\n", *p, *ptr);
    
    return 0;
}


// printf("p = %p, ptr = %p\n", p, ptr);

