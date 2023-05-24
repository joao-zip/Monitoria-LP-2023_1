#include <stdio.h>

int main () {
    int inicio_intervalo, fim_intervalo;
    int auxiliar, valor_atual, eh_primo = 0,somatorio = 0;

    printf("Digite o inicio do intervalo: ");
    scanf("%d", &inicio_intervalo);

    printf("Digite o fim do intervalo: ");
    scanf("%d", &fim_intervalo);

    //laço de repetição para percorrer o intervalo dado pelo usuário
    for(valor_atual = inicio_intervalo; valor_atual <= fim_intervalo; valor_atual++) {
        for(auxiliar = 2; auxiliar <= valor_atual/2; auxiliar++) {
            if(valor_atual % auxiliar == 0) {
                eh_primo = 1;
            }
        }
        if(eh_primo == 0) {
            somatorio += valor_atual;
        }
    }

    printf("A soma de todos os numeros primos do intervalo eh: %d", somatorio);

    return 0;
}