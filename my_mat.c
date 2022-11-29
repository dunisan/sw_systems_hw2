//
// Created by Daniel Schneiderman on 21 Nov 2022.
//

#include "my_mat.h"

#define min(a,b)    (((a) < (b)) ? (a) : (b)) // campare 2 num and return min 

// scan a 10x10 matrix from user

void getMatValue(){

    for(int i=0;i<MATRIX_LENGTH;i++){
        for(int j=0;j<MATRIX_LENGTH;j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

/* print True if their is a path from index i to j in the matrix
 if their is none print False */

void hasA_Path(int i, int j){
    if(mat[i][j] > 0)  // their is a path
        printf("True\n");
    else
        printf("False\n");
}


/* Find the shortest path from vertex i to j.
 if their is none return -1*/

void shortestPath(int i, int j){

    if(mat[i][j] > 0)
        printf("%d\n", mat[i][j]);
    else
        printf("%d\n", -1);
}


/* perform floyd-warshall algorithms on the given matrix to check the shortest path
 from one vertex to another*/

void analizeMat(){

    for(int k=0; k<MATRIX_LENGTH; k++){
        for(int i=0; i<MATRIX_LENGTH; i++){
            for(int j=0; j<MATRIX_LENGTH; j++){

                if(mat[i][k] == 0 ||  mat[k][j] == 0) // their is no path for i to j through k 
                    continue; 
                if(mat[i][j] == 0) // their is no path directly from i to j. go through k
                    mat[i][j] = mat[i][k] + mat[k][j];
                else    // get the min path between the 2 options. 
                     mat[i][j] = min(mat[i][j],mat[i][k]+mat[k][j]);
            } // end of j for loop
        } // end of i for loop 
    }   // end of k for loop

    // Retrun the middle diagonal line to be 0. 
    for(int i=0;i<MATRIX_LENGTH;i++)
        mat[i][i] = 0;
}

