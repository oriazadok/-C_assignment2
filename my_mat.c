#include <stdio.h>
#include "my_mat.h"

#define INF 99999
#define N 10

int mat[N][N];
int temp[N][N];

int copy();
int Floyd_Warshall_algorithm();
int min(int a, int b);

int initGraph() {
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    copy();
    Floyd_Warshall_algorithm();

    return 0;
}

int iaRoute() {
    int i,j;
    scanf("%d%d", &i, &j);
    if ((temp[i][j] != INF) && (temp[i][j] != 0)) {
        printf("true");
    } else {
        printf("false");
    }
    printf("\n");

    return 0;
}

int route() {

    int i,j;
    scanf("%d%d", &i, &j);
    if ((temp[i][j] != INF) && (temp[i][j] != 0)) {
        printf("%d", temp[i][j]);
    } else {
        printf("-1");
    }
    printf("\n");

    return 0;
}



int copy() {
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            temp[i][j] = mat[i][j];
        }
    }
    return 0;
}

int Floyd_Warshall_algorithm() {
    for (int k=1; k<=N; k++) {
        for (int i=1; i<=N; i++) {
            for (int j=1; j<=N; j++) {
                temp[i][j] = min(temp[i][j], temp[i][k] + temp[k][j]);
            }
        }
    }
    return 0;
}

int min(int a, int b) {
    if(a < b) {
        return a;
    }
    return b;
}