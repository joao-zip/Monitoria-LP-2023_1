#include <stdio.h>

int main () {
    
    float latao, zinco, cobre;

    printf("Digite a quantidade de latao(em gramas): "); scanf("%f", &latao);

    zinco = 0.7 * latao;
    cobre = 0.3 * latao;
        
    printf("Zinco: %.2f\nCobre: %.2f\n", zinco, cobre);

    return 0;
}
