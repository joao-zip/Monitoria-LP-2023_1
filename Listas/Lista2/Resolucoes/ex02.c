#include <stdio.h>
#include <stdlib.h>
#define TRUE 1

int main() {

    int lado_apostado, face;
    float montante;

    printf("Digite o montante a ser inserido na aposta: "); scanf("%f", &montante);

    do {
    
      printf("Lado apostado(-1 para parar): "); scanf("%d", &lado_apostado);
      if(lado_apostado == -1) // 1 condicao de saída
          break;
    
      face = rand() % 6 + 1;
      
      printf("O lado sorteado foi : %d", face);
  
      if(face != lado_apostado) {
          montante -= 0.2;
      }else{ // face == lado_apostado
          montante += 1; 
      }

      if(montante <= 0) // 2 condicao de saída
          break;

    }while(TRUE);

    if(lado_apostado == -1) {
        printf("Saldo final: %2.3f", montante); 
    }

    return 0;
}
