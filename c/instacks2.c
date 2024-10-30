// sum of adjacent distances
#include <stdio.h>
 
int sum_of_distances( int n , int arr[] ) {
    int sum = 0 ;
    for( int i = 0 ; i < n-1 ; i++ ) {
        sum += ( arr[i] - arr[i+1] ) ;
    }
    return sum ;
} 
int main() {
    int arr[5] = { 45,2,3,4,1 } ;
    int result = sum_of_distances(5 , arr) ;
    printf("Sum of distances : %d \n" , result) ;
    return 0 ;
}