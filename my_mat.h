//
// Created by Daniel Schneiderman on 21 Nov 2022.
//

#include <stdio.h>
#include <stdlib.h>
#define MATRIX_LENGTH 10    // matrix nxn size 
extern int mat[MATRIX_LENGTH][MATRIX_LENGTH];


/* scan a 10x10 matrix from user*/

void getMatValue();

/* print True if their is a path from index i to j in the matrix
 if their is none print False */

void hasA_Path(int i, int j);



/* Find the shortest path from vertex i to j.
 if their is none return -1*/

void shortestPath(int i, int j);



/* perform floyd-warshall algorithms on the given matrix to check the shortest path
 from one vertex to another*/

void analizeMat();


