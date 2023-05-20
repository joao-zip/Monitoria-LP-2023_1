#include <stdio.h>

int main () {

    int a, b;

    printf("Digite o intervalo desejado: "); 
    
    do {
        scanf("%d %d", &a, &b);
        
        if(b < a)
            printf("O intervalo deve ser escrito na forma crescente. Digite novamente: ");

    } while(b < a);
    
    for(int i = a; i <= b; i++) {
        if((i % 9) == 0 || (i % 19) == 0)
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}
