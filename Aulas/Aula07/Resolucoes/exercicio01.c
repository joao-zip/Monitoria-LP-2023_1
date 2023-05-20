#include <stdio.h>

int main () {
    int R[10], S[10], U[20], Y[10];

    //scaneando os valores do vetor R
    printf("Digite os valores de R: ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &R[i]);
    }

    //scaneando os valores do vetor S
    printf("Digite os valores de S: ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &S[i]);
    }    

    //fazendo a união dos vetores R e S no vetor U
    for(int i = 0; i < 10; i++) {
        U[i] = R[i]; 
    }

    for(int i = 0; i < 10; i++) {
        U[i + 10] = S[i]; 
    }

    //fazendo a multiplicação dos vetores no vetor Y
    for(int i = 0; i < 10; i++) {
        Y[i] = R[i] * S[i];
    }

    //printando o vetor U
    printf("Vetor U: ");
    for(int i = 0; i < 20; i++) {
        printf("%d ", U[i]); 
    }

    printf("\n");
    
    //printando o vetor Y
    printf("Vetor Y: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", Y[i]); 
    }

    return 0;
}