#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int somaPrincipal = 0, somaSecundaria = 0;

    for(int i = 0; i < 3; i++) {
        somaPrincipal += matriz[i][i];            // diagonal principal
        somaSecundaria += matriz[i][2 - i];      // diagonal secundária
    }

    printf("Soma diagonal principal = %d\n", somaPrincipal);
    printf("Soma diagonal secundaria = %d\n", somaSecundaria);

    return 0;
}
