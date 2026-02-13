#include <stdio.h>

#define V 4

void printGraph(int adj[V][V]) {
	int i,j;
    for (i = 0; i < V; i++) {
        for (j= 0; j < V; j++) {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // A simple square graph where 1 means a connection exists
    int adj[V][V] = {
        {0, 1, 1, 0},
        {1, 0, 1, 1},
        {1, 1, 0, 1},
        {0, 1, 1, 0}
    };

    printf("Adjacency Matrix:\n");
    printGraph(adj);
    return 0;
}