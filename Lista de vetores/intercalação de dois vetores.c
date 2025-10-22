#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], intercalado[10];
    int i, j = 0;

    printf("Digite 5 numeros para o primeiro vetor:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite 5 numeros para o segundo vetor:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &vetor2[i]);
    }

    for(i = 0; i < 5; i++) {
        intercalado[j++] = vetor1[i];
        intercalado[j++] = vetor2[i];
    }

    printf("Vetor intercalado:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", intercalado[i]);
    }

    return 0;
}
