#include <stdio.h>

int main () {
    float matrizA[3][5];
    float matrizB[3][5];
    float matrizResultante[3][5];

    printf("Digite os valores para a matriz A:\n");

    //scaneando os valores das posições que o usuário deseja colocar na matriz A
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("[%d][%d] = ", i + 1, j + 1);
            scanf("%f", &matrizA[i][j]);
        }
    }

    printf("Digite os valores para a matriz B:\n");

    //scaneando os valores das posições que o usuário deseja colocar na matriz B
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("[%d][%d] = ", i + 1, j + 1);
            scanf("%f", &matrizB[i][j]);
        }
    }

    //fazendo a soma de matrizes e alocando na matrizResultante
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            matrizResultante[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    //por fim, printando a matriz resultante da soma
    printf("Matriz resultante da soma de A com B:\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("[%.2f] ", matrizResultante[i][j]);
        }
        printf("\n");
    }

    return 0;
}