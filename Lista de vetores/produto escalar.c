#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5];
    int i, produto = 0;

    printf("Digite 5 numeros para o primeiro vetor:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite 5 numeros para o segundo vetor:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &vetor2[i]);
    }

    for(i = 0; i < 5; i++) {
        produto += vetor1[i] * vetor2[i];
    }

    printf("Produto escalar = %d\n", produto);

    return 0;
}
