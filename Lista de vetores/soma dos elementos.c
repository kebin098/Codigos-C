#include <stdio.h>

int main() {
    int vetor[10];
    int i, soma = 0;

    printf("Digite 10 numeros inteiros:\n");
    for(i = 0; i < 10; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &vetor[i]);
        soma += vetor[i]; // acumula a soma
    }

    printf("\nA soma de todos os elementos do vetor é: %d\n", soma);

    return 0;
}