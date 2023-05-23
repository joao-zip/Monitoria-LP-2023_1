#include <stdio.h>

int main () {
    int vetor[20];
    int aux, lsup, j;

    for(int i = 0; i < 20; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    lsup = 20;

    for(j = 1; j <= lsup-1; j++) {
        if(vetor[j] > vetor[j + 1]) {
            aux = vetor[j];
            vetor[j] = vetor[j + 1];
            vetor[j + 1] = aux;
        }
    }


    printf("Vetor ordenado: \n");

    for(int i = 0; i < 20; i++) {
        printf("[%d] ", vetor[i]);
    }

    return 0;
}