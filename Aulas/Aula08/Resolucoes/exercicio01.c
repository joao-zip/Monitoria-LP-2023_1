#include <stdio.h>

int main () {
    //declarando variáveis:
    int mat_de_inteiros[4][5];
    int soma_linha[4] = {0, 0, 0, 0};
    int total = 0;

    printf("Digite os valores da matriz pela posicao: \n");

    //scaneando os valores das posições que o usuário deseja colocar
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            printf("[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &mat_de_inteiros[i][j]);
        }
    }

    //fazendo a soma por linhas da matriz e colocando no vetor o resultado
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            soma_linha[i] += mat_de_inteiros[i][j];
        }
    }

    //por fim, fazendo a soma dos valores de cada posição do vetor e colocando em total
    for(int i = 0; i < 4; i++) {
        total += soma_linha[i];
    }

    //printando o resultado final da soma
    printf("A soma total da matriz eh: %d\n", total);

    return 0;
}