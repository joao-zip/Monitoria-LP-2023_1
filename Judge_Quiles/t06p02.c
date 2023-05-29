#include <stdio.h>

int main() {

    int num_linhas, num_colunas;

    do {
        scanf("%d %d", &num_linhas, &num_colunas);
    }while((num_linhas > 30 || num_linhas < 0) || (num_colunas > 30 || num_colunas < 0));

    int matriz[num_linhas][num_colunas],
        transposta[num_colunas][num_linhas];

    // Preenche os valores da matriz
    for(int i = 0; i < num_linhas; i++)
        for(int j = 0; j < num_colunas; j++)
            scanf("%d", &matriz[i][j]);

    // Preenche os valores da matriz transposta
    for(int i = 0; i < num_linhas; i++)
        for(int j = 0; j < num_colunas; j++)
            transposta[j][i] = matriz[i][j];

    // Printa a matriz transposta
    for(int i = 0; i < num_colunas; i++) {
        for(int j = 0; j < num_linhas; j++)
            printf("%d ", transposta[i][j]);
        printf("\n");
    }
    
    return 0;
}
