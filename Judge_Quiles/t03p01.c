#include <stdio.h>

int main() {
   
    int a, b;
    float media = 0,
          quant_numeros = 0;

    scanf("%d %d", &a, &b);

    if(a > b)
        printf("%f", media);
    else {
        for(int i = a; i <= b; i++) {
            if(i % 2 == 0 && i % 7 == 0) {
                quant_numeros++;
                media += i;
            }
        }
        printf("%f", media / quant_numeros);
    }

    return 0;
}
