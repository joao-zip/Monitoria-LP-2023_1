#include <stdio.h>

int main () {
    int linha_matrizA, coluna_matrizA;
    int linha_matrizB, coluna_matrizB;
    int aux = 0;

    printf("Quantas linhas deseja na Matriz A: ");
    scanf("%d", &linha_matrizA);

    printf("Quantas colunas deseja na Matriz A: ");
    scanf("%d", &coluna_matrizA);

    printf("Quantas linhas deseja na Matriz B: ");
    scanf("%d", &linha_matrizB);

    printf("Quantas colunas deseja na Matriz B: ");
    scanf("%d", &coluna_matrizB);

    if(coluna_matrizA != linha_matrizB) {
        printf("Para realizar a multiplicacao de matrizes eh necessario que: \
        o numero de colunas da Matriz A seja igual ao numero de linha da Matriz B");
    }
    else {
        int matrizA[linha_matrizA][coluna_matrizA];
        int matrizB[linha_matrizB][coluna_matrizB];
        int matrizC[linha_matrizA][coluna_matrizB];

        printf("De os valores para a Matriz A: \n");

        for(int i = 0; i < linha_matrizA; i++) {
            for(int j = 0; j < coluna_matrizA; j++) {
                printf("[%d][%d] = ", i + 1, j + 1);
                scanf("%d", &matrizA[i][j]);
            }
        }

        printf("De os valores para a Matriz B: \n");

        for(int i = 0; i < linha_matrizB; i++) {
            for(int j = 0; j < coluna_matrizB; j++) {
                printf("[%d][%d] = ", i + 1, j + 1);
                scanf("%d", &matrizB[i][j]);
            }
        }

        for(int i = 0; i < linha_matrizA; i++) {
            for(int j = 0; j < coluna_matrizB; j++) {
                matrizC[i][j] = 0;
                for(int x = 0; x < linha_matrizB; x++) {
                    aux += matrizA[i][x] * matrizB[x][j];
                }
                matrizC[i][j] = aux;
                aux = 0;
            }
        }

        printf("Resultado da Matriz C: \n");

        for(int i = 0; i < linha_matrizA; i++) {
            for(int j = 0; j < coluna_matrizB; j++) {
                printf("[%d]", matrizC[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}