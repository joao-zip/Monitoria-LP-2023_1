#include <stdio.h>

int main () {
    
    int numero;
    long fatorial = 1;

    if(numero < 0) {
        printf("NaN");
    } else {
        for(int i = 1; i < fatorial; i++) {
            fatorial *= i;
        }
    }
       
    printf("%ld", fatorial);

    return 0;
}
