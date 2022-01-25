#include <stdio.h>
#include "my_mat.h"


int main() {

    char ch;

    while(1) {

        scanf(" %c", &ch);

        switch(ch) {
            case 'A':
                initGraph();
                break;
            case 'B':
                iaRoute();
                break;
            case 'C':
                route();
                break;
            case 'D':
                break;
            }
    }
    return 0;
}