#include <stdio.h>
#include <stdlib.h>

int main() {

    int face;
    char opcao;

    do {
        face = rand() % 6 + 1;

        printf("Face sorteada: %d", face);

        printf("Deseja continuar? [S/N]:"); scanf("%c", &opcao);
    } while(opcao != 'N'); 

    return 0;
}
