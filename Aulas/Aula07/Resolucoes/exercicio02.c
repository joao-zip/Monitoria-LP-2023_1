#include <stdio.h>

int main () {
    int A[128];
    int K, valor_encontrado = 0;

    for(int i = 0; i < 128; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &A[i]);
    }

    printf("Digite o valor da chave K: ");
    scanf("%d", &K);

    for(int i = 0; i < 128; i++) {
        if(A[i] == K) {
            printf("o valor %d esta na posicao %d!", K, i);
            valor_encontrado = 1;
        }
    }

    if(valor_encontrado == 0) {
        printf("O valor %d nao esta no vetor!", K);
    }

    return 0;
}