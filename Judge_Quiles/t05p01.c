#include <stdio.h>

int main() {

    int tam_vetor;

    scanf("%d", &tam_vetor);

    if(tam_vetor > 50 || tam_vetor < 2) {
        printf("Erro");
    }else{
        int vetor1[tam_vetor];

        for(int i = 0; i < tam_vetor; i++)
            scanf("%d", &vetor1[i]);

        // Printa os valores em ordem inversa
  
        for(int i = tam_vetor - 1; i >= 0; i--)
            printf("%d ", vetor1[i]);
    }

    return 0;
}
