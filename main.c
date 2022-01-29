#include <stdio.h>
#include "my_mat.h"

int main() {

    int mat[N][N] = { 0 };
    //int temp[N][N] = { 0 }; // 不用这个矩阵

    char ch;

    while(1) {

        scanf(" %c", &ch);

        switch(ch) {
            case 'A':
                initGraph(mat);
                break;
            case 'B':
                iaRoute(mat);
                break;
            case 'C':
                route(mat);
                break;
            case 'D':
                break;
            }
    }
    return 0;
}