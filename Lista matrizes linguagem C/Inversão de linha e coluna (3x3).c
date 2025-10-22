#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // inverte cada linha
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3/2; j++) {
            int temp = matriz[i][j];
            matriz[i][j] = matriz[i][2 - j];
            matriz[i][2 - j] = temp;
        }
    }

    printf("Matriz modificada:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
