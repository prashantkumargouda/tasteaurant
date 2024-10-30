#include<stdio.h>

int a[20][20], reach[20], n;

void dfs(int v) {
    int i;
    reach[v] = 1;
    for (i = 1; i <= n; i++) {
        if (a[v][i] && !reach[i]) {
            printf("\n%d -> %d", v, i);
            dfs(i);
        }
    }
}

int main() {
    int i, j, count = 0;
    
    printf("\nEnter number of vertices: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        reach[i] = 0;
        for (j = 1; j <= n; j++)
            a[i][j] = 0;
    }

    printf("\nEnter adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Start DFS from vertex 1 
    dfs(1);

    printf("\n");

    for (i = 1; i <= n; i++) {
        if (reach[i])
            count++;
    }

    if (count == n)
        printf("\nGraph is connected\n");
    else
        printf("\nGraph is not connected\n");

    return 0;
}


// void dfs(int i) {
//     int j ;
//     printf("%d " , i) ;
//     visited[i] = 1 ;

//     for( int j = 0 ; j<7 ; j++ ) {
//         if( a[i][j] == 1 && !visited[j] ) {
//             dfs(j) ; 
//         }
//     }
// }