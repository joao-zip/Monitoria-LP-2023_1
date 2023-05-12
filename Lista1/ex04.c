#include <stdio.h>

int main () {
   
    int ini_intervalo, fim_intervalo;
    long fatorial;

    printf("Digite o intervalo desejado: ");
    do{ 
        scanf("%d %d", &ini_intervalo, &fim_intervalo);

        if(ini_intervalo < 0 || fim_intervalo < 0){
            printf("Os valores do intervalo devem ser nao-negativos. Digite novamente: ");
            
        }else if(fim_intervalo < ini_intervalo) {
            printf("O intervalo deve ser crescente. Digite novamente: ");
        }

    }while(fim_intervalo < ini_intervalo || ini_intervalo < 0 || fim_intervalo < 0);

    for (int i = ini_intervalo; i <= fim_intervalo; i++) {
    
        fatorial = 1;
        for (int j = i; j > 1; j--) {
            fatorial *= j;
        }

        printf("%3d! = %10ld\n", i, fatorial);

    } 

    return 0;
}
