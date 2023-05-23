#include <math.h>
#include <stdio.h>

int main() {

  int numero, aprox;
  float raiz;

  printf("Digite um número: ");
  scanf("%d", &numero);

  raiz = sqrt(numero);

  if ((raiz - (int)raiz) >= 0.5)
    aprox = (int)raiz + 1;
  else
    aprox = (int)raiz;

  printf("A raiz do número %d é %.3f e o inteiro que mais se aproxima é: %d",
         numero, sqrt(numero), aprox);

  return 0;
}
