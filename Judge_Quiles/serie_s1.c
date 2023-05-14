#include <stdio.h>

int main () {

    int numero;
    long serie = 0, potencia;

    scanf("%d", &numero);
    
    if(numero <= 0 || numero > 15)
        printf("NaN");
    else {
        for(int i = 1; i <= numero; i++) {

            potencia = 1;
            for (int j = 1; j <= i; j++) {
                potencia *= i;
            }

            serie += potencia;
        }
        printf("%ld", serie);
    }

    return 0;
}
