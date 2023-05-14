#include <stdio.h>
#include <math.h>

int main () {
   
    long num_binario;
    scanf("%ld", &num_binario);

    int resto, n_decimal = 0, count = 0;

    while(num_binario != 0) {
        resto = num_binario % 10;
        num_binario /= 10;

        n_decimal += resto * pow(2, count);
        count++;
    }

    printf("%d",n_decimal);

    return 0;
}
