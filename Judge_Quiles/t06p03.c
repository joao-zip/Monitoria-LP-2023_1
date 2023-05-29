#include <stdio.h>

int main() {

    int lin_A, lin_B,
        col_A, col_B;

    scanf("%d %d %d %d", &lin_A, &col_A, &lin_B, &col_B);
    
    int matA[lin_A][col_A],
        matB[lin_B][col_B],
        matC[lin_A][col_B];

    if(col_A != lin_B || lin_A > 30 || lin_B > 30 || col_A > 30 || lin_B > 30)
        printf("ERRO");
    else {
        // Leitura da matriz A
        for(int i = 0; i < lin_A; i++)
            for(int j = 0; j < col_A; j++)
                scanf("%d ", &matA[i][j]);

        // Leitura da matriz B
        for (int i = 0; i < lin_B; i++)
            for(int j = 0; j < col_B; j++)
                scanf("%d ", &matB[i][j]);
        
        // Preenchimento da matriz C = A * B
        for(int i = 0; i < lin_A; i++)
            for(int j = 0; j < col_B; j++) {
                matC[i][j] = 0; // Inicializamos com o valor 0
                for(int k = 0; k < lin_B; k++)
                    matC[i][j] += matA[i][k] * matB[k][j]; // Vamos somando conforme o tamanho das matrizes
            }

        // Exibimos a matriz C
        for (int i = 0; i < lin_A; i++) {
            for(int j = 0; j < col_B; j++)
                printf("%d ", matC[i][j]);
            printf("\n");
        }
    }

    return 0;
}
