#include <stdio.h>
#include "my_mat.h"

int Matrix[10][10];

void CreateMatrix(){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            int num;
            scanf("%d", &num);
            Matrix[i][j] = num;
        }
    }
    for (int k = 0; k < 10; k++) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (Matrix[i][k] != 0 && Matrix[k][j] != 0) {
                    if (Matrix[i][j] > Matrix[i][k] + Matrix[k][j] || Matrix[i][j] == 0) {
                        Matrix[i][j] = Matrix[i][k] + Matrix[k][j];
                    }
                }
            }
         }
     }
     for (int i = 0; i < 10; i++) {
        Matrix[i][i] = 0;
    }
}


void IsTherePath(int i, int j){
    if(i == j || Matrix[i][j] == 0){
        printf("False\n");
    }else{
        printf("True\n");
    }
}

void ShortestPath(int i, int j){
    if(i == j || Matrix[i][j] == 0){
        printf("-1\n");
    }else{
        printf("%d\n" , Matrix[i][j]);
    }
}

