#include <stdio.h>
#include <math.h>

int main () {
    int numero, raiz1, raiz2;

    printf("Digite o numero que deseja saber a raiz quadrada: ");
    scanf("%d", &numero);

    /* ========== UTILIZANDO A SQRT DA MATH.H ========== */
    raiz1 = sqrt(numero);

    /* ========== UTILIZANDO LAÇO DE REPETIÇÃO ========== */
    for(int i = 0; i*i <= numero; i++) {
        raiz2 = i;
    }

    printf("raiz quadrada 1: %d\n", raiz1);
    printf("raiz quadrada 2: %d\n", raiz2);
    
    return 0;
}