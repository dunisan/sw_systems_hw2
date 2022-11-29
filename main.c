#include "my_mat.h"
int mat[MATRIX_LENGTH][MATRIX_LENGTH];

int main() {
    

    while(1){
        char type;
   	int i, j;
        // scan the type of action to be performd
        scanf("%c", &type);

        // Analize the action. 
        switch (type) {
            case 'A': // Get a new matrix from user
                getMatValue();
                analizeMat();
                continue;
            case 'B': // check if their is a path from 2 given vertex, i and j. 
                scanf("%d %d", &i, &j);
                hasA_Path(i,j);
                continue;
            case 'C': // find the shortest path from 2 given vertex, i and j. 
                scanf("%d %d", &i, &j);
                shortestPath(i,j);
                continue;
            case 'D': // exit the while loop
                exit(0);
        }
    }

    printf("\n");
    return 0;
}

