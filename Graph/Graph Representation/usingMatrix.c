#include<stdio.h>
#define Vertices 4

// initialize matrix 0
void init(int adjMatrix[][Vertices]){
    for (int i = 0; i < Vertices; i++)
    {
        for (int j = 0; j < Vertices; j++)
        {
            adjMatrix[i][j] = 0;
        }
        
    }
    
}

void insertEdge(int adjM[][Vertices], int i, int j){
    adjM[i][j] = 1;
    adjM[j][i] = 1;
}

void print(int adjM[][Vertices]){

    for (int i = 0; i < Vertices; i++)
    {
        printf("%d: ", i);
        for (int j = 0; j < Vertices; j++)
        {
            printf("%d ", adjM[i][j]);
        }
        printf("\n");
    }
    
}

int main(){

    int adjMatrix[Vertices][Vertices];

    init(adjMatrix);
    insertEdge(adjMatrix, 0, 1);  
    insertEdge(adjMatrix, 0, 2);  
    insertEdge(adjMatrix, 1, 2);  
    insertEdge(adjMatrix, 2, 0);  
    insertEdge(adjMatrix, 2, 3);  
  
    print(adjMatrix);

    return 0;
}