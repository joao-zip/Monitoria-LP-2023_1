#include <stdio.h>

int main() {

    int lin_A, lin_B,
        col_A, col_B;

    scanf("%d %d %d %d", &lin_A, &col_A, &lin_B, &col_B);
    
    int matA[lin_A][col_A],
        matB[lin_B][col_B],
        matIntermed[lin_A][col_A],
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
        
        // Preenchimento da matriz intermediária
        for(int i = 0; i < lin_A; i++)
            for(int j = 0; j < col_A; j++) {
                matIntermed[i][j] = 0;
                for(int k = 0; k < lin_A; k++)
                    matIntermed[i][j] += matA[i][k] * matA[k][j];
            }

        // Preenchimento da matriz final (matC)
        for(int i = 0; i < lin_A; i++)
            for(int j = 0; j < col_B; j++) {
                matC[i][j] = 0;
                for(int k = 0; k < lin_B; k++)
                    matC[i][j] += matIntermed[i][k] * matB[k][j];
            }
    
        // Exibimos a matriz final
        for(int i = 0; i < lin_A; i++) {
            for(int j = 0; j < col_B; j++)
                printf("%d ", matC[i][j]);
            printf("\n");
        }   
    }    

    return 0;
}
