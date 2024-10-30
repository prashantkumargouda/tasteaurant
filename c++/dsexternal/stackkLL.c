// #include <stdio.h>

// // int n , ne = 1 ,a ,b , u ,v , i , j ;

// // int visited[10] = {0} , cost[10][10] , min , mincost = 0 ;

// int a, b, u, v, n, i, j, ne = 1; // u connected node v unvisited node   
// int visited[10] = {0}, min, mincost = 0, cost[10][10];
// int main() {
//     printf("Enter the no of nodes :") ;
//     scanf("%d ", &n) ;

//     printf("\nEnter the adjcency matrix :\n") ;
//     for( i=1 ; i<=n ; i++) {
//         for(  j=1 ; j<=n ; j++ ) {
//             scanf("%d ", &cost[i][j]) ;
//             if( cost[i][j] == 0 ){
//                 cost[i][j] = 999 ;
//             }
//         }
//     }

//     visited[1] = 1 ;
//     printf("\n") ;

//     while( ne < n )  {
//         for( i=1 , min = 999 ; i<=n ; i++) {
//             for(  j=1 ; j<=n ; j++ ) {
//                 if( cost[i][j] < min && visited[i] != 0 ) {
//                     min = cost[i][j];
//                     a = u = i ;
//                     b = v = j ;
//                 }
//             }
//         }

//         if( visited[u] == 0 || visited[v] == 0 ) {
//             printf(" \n edge %d : ( %d %d )  , cost = %d " , ne++ , a , b , min ) ;
//             mincost += min ;
//             visited[b] = 1 ;
//         }

//         cost[a][b] = cost[b][a] = 999 ;
//     }

//     printf(" \nMinimum cost : %d \n", mincost ) ;

//     return 0 ;

// }

#include <stdio.h>

int a, b, u, v, n, i, j, ne = 1; // u is the visited node, v is the unvisited node
int visited[10] = {0}, min, mincost = 0, cost[10][10];

int main() {
    // Input number of nodes
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Input the adjacency matrix
    printf("\nEnter the adjacency matrix:\n");
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0) {
                cost[i][j] = 999;  // Set to a high value to represent no edge
            }
        }
    }

    visited[1] = 1;  // Starting from node 1
    printf("\n");

    // Prim's algorithm
    while(ne < n) {
        min = 999;  // Initialize min to a large number
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= n; j++) {
                if(cost[i][j] < min && visited[i] != 0) {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }

        if(visited[u] == 0 || visited[v] == 0) {
            printf("\nEdge %d: (%d %d), cost = %d", ne++, a, b, min);
            mincost += min;
            visited[b] = 1;
        }

        cost[a][b] = cost[b][a] = 999;  // Mark edge as visited
    }

    // Print the minimum cost of the spanning tree
    printf("\nMinimum cost = %d\n", mincost);

    return 0;
}
