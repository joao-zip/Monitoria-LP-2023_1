#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main() {

  int ini_intervalo, fim_intervalo, soma = 0, eh_primo;

  do {
    printf("Digite o intervalo [a,b]: ");
    scanf("%d %d", &ini_intervalo, &fim_intervalo);
  } while (ini_intervalo > fim_intervalo);

  for (int i = ini_intervalo; i <= fim_intervalo; i++) {
    eh_primo = TRUE;
    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        eh_primo = FALSE;
        break;
      }
    }
    if (eh_primo == TRUE)
      soma += i;
  }

  printf("A soma eh: %d", soma);

  return 0;
}
