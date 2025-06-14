#include<stdio.h>

int a, b, u, v, n, i, j, ne = 1; // u connected node v unvisited node   
int visited[10] = {0}, min, mincost = 0, cost[10][10];

int main() {
    printf("\nEnter the number of nodes: ");
    scanf("%d", &n);

    printf("\nEnter the adjacency matrix:\n");
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0)
                cost[i][j] = 999;  // Set to large value for disconnected edges
        }
    }

    visited[1] = 1;  // Start from the first node
    printf("\n");

    while(ne < n) {
        for(i = 1, min = 999; i <= n; i++) {
            for(j = 1; j <= n; j++) {
                if(cost[i][j] < min && visited[i] != 0) {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }

        if(visited[u] == 0 || visited[v] == 0) {
            printf("\n Edge %d:(%d %d) cost: %d", ne++, a, b, min);
            mincost += min;
            visited[b] = 1;
        }
        cost[a][b] = cost[b][a] = 999;  // Mark edge as visited
    }

    printf("\nMinimum cost = %d\n", mincost);
    return 0;   
}
