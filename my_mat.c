#include <stdio.h>
#include "my_mat.h"

int Floyd_Warshall_algorithm(int mat[N][N]);
int printGraph(int mat[N][N]);


int initGraph(int mat[N][N]) {
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            scanf(" %d", &mat[i][j]);
            if((i != j) && (mat[i][j] == 0)) {
                mat[i][j] = INF;
            }
        }
    }

    Floyd_Warshall_algorithm(mat);

    return 0;
}

int iaRoute(int mat[N][N]) {
    int i,j;
    scanf("%d%d", &i, &j);
    if ((mat[i][j] != INF) && (mat[i][j] != 0)) {
        printf("True");
    } else {
        printf("False");
    }
    printf("\n");

    return 0;
}

int route(int mat[N][N]) {

    int i,j;
    scanf("%d%d", &i, &j);
    if ((mat[i][j] != INF) && (mat[i][j] != 0)) {
        printf("%d", mat[i][j]);
    } else {
        printf("-1");
    }
    printf("\n");

    return 0;
}

int Floyd_Warshall_algorithm(int mat[N][N]) {
    for (int k=0; k<N; k++) {
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                if ((mat[i][j] > (mat[i][k] + mat[k][j])) && (mat[i][k] != INF) && (mat[k][j] != INF)){
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
            }
        }
    }
    return 0;
}

int printGraph(int mat[N][N]) {
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}