#include <stdio.h>

int main () {
    int matriz_rgb[128][128][3];
    int num_aleatorio;

    printf("Digite as intensidades de RGB da matriz, em todos seus pixels: ");

    for(int i = 0; i < 128; i++) {
        for(int j = 0; j < 128; j++) {
            for(int k = 0; k < 3; k++) {
                num_aleatorio = rand()%10;
                matriz_rgb[i][j][k] = num_aleatorio;
            }
        }
    }

    return 0;
}