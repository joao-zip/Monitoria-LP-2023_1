#include <stdio.h>

int main () {
    char matriz[3][3];
    int linha, coluna, num_jogadas = 1;

    printf("Nesse jogo o primeiro jogador eh o 'X' e o segundo eh o 'O', boa sorte!");

   for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            matriz[i][j] = ' ';
        }
    }

    while(num_jogadas < 9) {
        printf("\nDigite a linha que quer jogar: ");
        scanf("%d", &linha);

        if(linha > 2 || linha < 0) {
            printf("As linhas estao numeradas de 0 a 2, digite novamente\n");
            continue;
        }

        printf("Digite a coluna que quer jogar: ");
        scanf("%d", &coluna);

        if(coluna > 2 || coluna < 0) {
            printf("As colunas estao numeradas de 0 a 2, digite novamente\n");
            continue;
        }

        if(matriz[linha][coluna] != ' ') {
            printf("Essa posicao ja foi utilizada, digite outra!");
            continue;
        }

        if(num_jogadas % 2 == 1) {
            matriz[linha][coluna] = 'X';
        }
        else {
            matriz[linha][coluna] = 'O';
        }

        if(matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2] && matriz[0][0] != ' ' ||
           matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2] && matriz[0][0] != ' ' ||
           matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0] && matriz[0][0] != ' ' ||
           matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1] && matriz[0][1] != ' ' ||
           matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2] && matriz[0][2] != ' ' ||
           matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2] && matriz[1][0] != ' ' ||
           matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2] && matriz[2][0] != ' ' ||
           matriz[2][0] == matriz[1][1] && matriz[2][0] == matriz[0][2] && matriz[2][0] != ' ') 
        {
            printf("Parabéns jogador %d! Voce venceu!", num_jogadas % 2);
            exit(0);
        }

        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                printf("[%c]", matriz[i][j]);
            }
            printf("\n");
        }   

        num_jogadas += 1;
    }

    return 0;
}