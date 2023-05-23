#include <stdio.h>
#include <stdlib.h>

int main () {
    int quantidade_de_lancamentos;
    int lado_que_caiu;
    float lado1, lado2, lado3, lado4, lado5, lado6;

    printf("Quantas vezes deseja lancar o dado: ");
    scanf("%d", &quantidade_de_lancamentos);

    lado1 = 0;
    lado2 = 0;
    lado3 = 0;
    lado4 = 0;
    lado5 = 0;
    lado6 = 0;

    for(int i = 0; i < quantidade_de_lancamentos; i++) {
        lado_que_caiu = rand() % 6;

        if(lado_que_caiu == 0) {
            lado1 += 1;
        }
        else if(lado_que_caiu == 1) {
            lado1 += 1;
        }
        else if(lado_que_caiu == 2) {
            lado1 += 1;
        }
        else if(lado_que_caiu == 3) {
            lado1 += 1;
        }
        else if(lado_que_caiu == 4) {
            lado1 += 1;
        }
        else {
            lado6 += 1;
        }
    }

    lado1 = (lado1 * 100)/quantidade_de_lancamentos;
    lado2 = (lado2 * 100)/quantidade_de_lancamentos;
    lado3 = (lado3 * 100)/quantidade_de_lancamentos;
    lado4 = (lado4 * 100)/quantidade_de_lancamentos;
    lado5 = (lado5 * 100)/quantidade_de_lancamentos;
    lado6 = (lado6 * 100)/quantidade_de_lancamentos;

    printf("Porcentagem de lado1: %.2f\n", lado1);
    printf("Porcentagem de lado2: %.2f\n", lado2);
    printf("Porcentagem de lado3: %.2f\n", lado3);
    printf("Porcentagem de lado4: %.2f\n", lado4);
    printf("Porcentagem de lado5: %.2f\n", lado5);
    printf("Porcentagem de lado6: %.2f\n", lado6);

    return 0;
}