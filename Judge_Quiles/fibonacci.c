#include <stdio.h>

int main () {
    
    int numero;
    scanf("%d", &numero);

    if(numero < 1)
        printf("NaN");
    else {
        int f_ini = 0, f_prox = 1, f_pos;

        for(int i = 3; i <= numero; i++) {
            f_pos = f_ini + f_prox;
            f_ini = f_prox;
            f_prox = f_pos;
        }

        if(numero == 1)
            printf("0");
        else if(numero == 2)
            printf("1");
        else
            printf("%d", f_pos);
    }

    return 0;
}
