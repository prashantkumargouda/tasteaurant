#include <stdio.h>

int v[5] = { 10,5,4,3,7 } ;
int t = 0 ; 
int n = 5 ;
int vi[5] ;
int a[5][5] = {{0,1,1,1,0} , {1,0,0,1,1} , {1,0,0,1,0} ,{1,1,1,0,1} , {0,1,0,1,0} } ;
int h[1000] = {0} ;
int dfs( int x , int i ) {
    vi[t++] = x ;
    h[x]=1 ;
    for( int j = 0 ; j < n ; j++ ) {
        if( a[i][j] != 0 && h[v[j]]==0 ) {
            dfs( v[j] , j ) ;
        }
    }
    for(int i = 0 ; i < 5 ; i++ ) {
        printf("%d " , vi[i]) ;
    }
    printf("\n") ;
}

int main() {
    dfs( 10 , 0 ) ;
}