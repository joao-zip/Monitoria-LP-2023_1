#include <stdio.h>
#define MAX 20
 
int main () {
    
    int vetor1[MAX], max, min;
    float media, qtd_numeros = 0;
   
    
    for(int i = 0; i < MAX; i++)
        scanf("%d", &vetor1[i]);
 
    max = min = vetor1[0];
    for(int i = 0; i < MAX; i++) {
        if(vetor1[i] > max)
            max = vetor1[i];
        else if(vetor1[i] < min)
            min = vetor1[i];
 
        if(vetor1[i] != 0){
            qtd_numeros++;
            media += vetor1[i];
        }
    } 
 
    printf("%d %d\n%.3f\n", max, min, media / qtd_numeros);
 
    for(int i = 0; i < MAX; i++)
        printf("%.3f ", (vetor1[i] - min) / (float)(max - min));
 
    return 0;
}
