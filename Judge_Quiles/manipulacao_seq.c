#include <stdio.h>
#define TRUE 1

int main () {
   
    int numero,
        tot_numeros, prod_numeros; 
    float med_7, quant_7;

    tot_numeros = med_7 = quant_7 = 0;

    prod_numeros = 1;

    while(TRUE) {
        scanf("%d", &numero);
        
        if(numero == -1)
            break;
        else if(numero <= 0)
            continue;
 
        tot_numeros++;

        if(numero % 7 == 0) {
            quant_7++;
            med_7 += numero;
        }
        if(numero % 3 == 0 && numero % 5 == 0) {
            prod_numeros *= numero;
        }
    }

    printf("%d %f %d", tot_numeros, med_7 / quant_7, prod_numeros);

    return 0;
}
