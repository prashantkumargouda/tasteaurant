#include <stdio.h>
// using namespace std ;

int minheight(int h1 , int h2 ) {
    if(h1 < h2) {
        return h1 ;
    }
    return h2 ;
}


int maxArea(int height[] , int heightSize) {
    int l = 0 ;
    int r = heightSize - 1 ;
    int max = 0 ;

    while( l < r )  {
        int lh = height[l] ;
        int rh = height[r] ; 
        int min_h = minheight( lh , rh ) ; 
        int width = r - l ;  
        int area = width * min_h; 
        printf("%d \n" ,area ) ;
        if (area > max) {
            max = area;
        }
        if( lh < rh ) {
            l++ ;
        }
        else {
            r-- ;   
        }
    }
    return max ;
}

int main() {
    int height[9] ;
    // cout << maxArea( height , 5 ) << endl;
    int n ;

    printf("Enter the value of n :") ;
    scanf("%d" , &n) ;

    printf("Enter the value of array :") ;
    for( int i = 0 ; i < n ; i++ ) {
        scanf("%d", &height[i] ) ;
    }
    printf("%d " , maxArea(height , n)) ;


    return 0 ;
}