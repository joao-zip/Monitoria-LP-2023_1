#include <stdio.h>

int main () {
    
    int a, b, num_perfeito;

    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++) {
        num_perfeito = 0;
        for(int j = 1; j < i; j++) {
            if(i % j == 0) {
                num_perfeito += j;
            }
        }
        if(num_perfeito == i)
            printf("%d ", i);
    }

    return 0;
}
