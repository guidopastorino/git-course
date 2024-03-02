#include <stdio.h>
#include <stdlib.h>

int main(){
    int **matriz = (int**)malloc(sizeof(int*) * 10);
    for(int i = 0; i<10; i++){
        matriz[i] = (int*)malloc(sizeof(int) * 10);
    }


    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            matriz[i][j] = 0;
        }
    }

    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            free(matriz[i]);
        }
    }
    free(matriz);

    return 0;
}