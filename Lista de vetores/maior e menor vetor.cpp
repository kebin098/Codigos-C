#include <stdio.h>

int main() {
    int vetor[15];
    int i, maior, menor;

    printf("Digite 15 numeros inteiros:\n");
    for(i = 0; i < 15; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    // inicializa maior e menor com o primeiro elemento
    maior = menor = vetor[0];

    for(i = 1; i < 15; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
        if(vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}