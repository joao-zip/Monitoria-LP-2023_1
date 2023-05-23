#include <stdio.h>
#define TRUE 1

int main() {

  int numero;
  float peso, peso_tot = 0, resultado = 0;

  while (TRUE) {
    printf("Digite um número e seu peso correspondente: ");
    scanf("%d", &numero);

    if (numero == -1)
      break;

    scanf("%f", &peso);

    resultado += (numero * peso);
    peso_tot += peso;
  }

  printf("A média ponderada dos números lidos é : %.3ff", resultado / peso_tot);

  return 0;
}
