#include <stdio.h>

int main () {
    
    int lim_intervalo, soma = 0;

    printf("Digite a o limite superior do intervalo: \n"); scanf("%d", &lim_intervalo);

    for(int i = 0; i <= lim_intervalo; i++) {
        if((i % 2) == 0) {
            soma += i; // Ou "soma = soma + i;"
        }
    }

    printf("O resultado da soma dos termos pares no intervalo [0, %d] eh : %d", lim_intervalo, soma);

    return 0;
}
