#include <stdio.h>

int main() {
    int matriz[4][4] = {
        {1, 5, 3, 2},
        {9, 7, 6, 4},
        {8, 12, 11, 10},
        {14, 13, 15, 16}
    };
    
    int maior = matriz[0][0];
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    
    printf("Maior elemento = %d\n", maior);
    return 0;
}
