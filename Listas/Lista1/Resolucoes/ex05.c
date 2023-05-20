#include <stdio.h>
#define TRUE 1

int main () {
   
    int numero, i;

    int soma_tot, qtd_num, maior_num, menor_num, 
        eh_primo, qtd_primos;

    float media_tot, media_pares, media_impares, media_primos, percent;

    soma_tot = qtd_num = maior_num = menor_num = media_pares = media_impares = media_primos = qtd_primos = 0;

    while(TRUE) {
        printf("Digite um numero(-1 para parar): "); scanf("%d", &numero);
        if(numero == -1)
            break;

        soma_tot += numero;
        qtd_num++;

        media_tot += numero;
        if(numero % 2 == 0)
            media_pares += numero;
        else
            media_impares += numero;

        if(numero > maior_num)
            maior_num = numero;
        
        if(numero < menor_num)
            menor_num = numero;

        eh_primo = 0;
        for(i = 2; i < numero; i++) {
            if(numero % i == 0) {
                eh_primo++;
                break;
            }
        }

        if(eh_primo == 0) {
            media_primos++;
            qtd_primos++;
        }
    } 

    media_tot /= qtd_num;
    media_primos /= qtd_primos;


    printf("Soma dos numeros: %d\n", soma_tot);
    printf("Media dos numeros: %2.2f\n", media_tot);
    printf("Quantidade de numeros: %d\n", qtd_num);
    printf("Maior numero: %d\n", maior_num);
    printf("Menor numero: %d\n", menor_num);


    return 0;
}
