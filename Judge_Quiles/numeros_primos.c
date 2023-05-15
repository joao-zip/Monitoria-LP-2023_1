#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main () {
   
    int ini_intervalo, fim_intervalo, eh_primo;

    scanf("%d %d", &ini_intervalo, &fim_intervalo);

    for(int i = ini_intervalo; i <= fim_intervalo; i++) {

        eh_primo = TRUE; 
        for(int j = 2; j < i; j++) {
            if(i % j == 0){
                eh_primo = FALSE;
                break;
            }
        }

        if(eh_primo == TRUE) {
            printf("%d ", i);
        }
        
    }

    return 0;
}
