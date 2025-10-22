#include <stdio.h>

int main() {
    int vetor[20];
    int i, pares = 0, impares = 0;

    printf("Digite 20 numeros inteiros:\n");
    for(i = 0; i < 20; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &vetor[i]);

        if(vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("\nQuantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);

    return 0;
}
