//  


#include<stdio.h>
#include<stdlib.h>

int front = -1, rear = -1;

void BST(int start, int n, int rel[][n] ){
    int visited[n];
    int Queue[n];  // For Traversing

    for(int i = 0; i < n; i++) visited[i] = 0;

    
    Queue[++rear] = start;
    visited[start] = 1;

    while(front != rear){
        int current = Queue[++front];
        printf(" %d ", current);

        for(int i = 0; i < n; i++){
            if(rel[current][i] == 1 && !visited[i]){
                Queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
}

// void DST(int rel[][] , int n){
//     int visited[n];
// }

void main(){
    int vertices,edges;
    printf("Enter no.of vertices :");
    scanf("%d",&vertices);
    int graphRelation[vertices][vertices];
    
   
    printf("Enter no.of Edges :");
    scanf("%d",&edges);

    printf("Enter Relations btw Vertices :\n");
    for(int i = 0; i < edges; i++){
        int src, dest;
        scanf("%d %d",&src, &dest);
        graphRelation[src][dest] = 1;
        graphRelation[dest][src] = 1;
    }
    int start;
    printf("Enter root to start :");
    scanf("%d", &start);
    printf("\nBreadth First Traversal BST : ");
    BST( start, vertices, graphRelation);

    // printf("\nDepth First Trraversal DST :");
    // DST(graphRelation, vertices);

}