#include <stdio.h>

int main() {
    int vetor[10];
    int i, num, encontrado = 0;

    printf("Digite 10 numeros inteiros:\n");
    for(i = 0; i < 10; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um numero para buscar no vetor: ");
    scanf("%d", &num);

    for(i = 0; i < 10; i++) {
        if(vetor[i] == num) {
            encontrado = 1;
            break; // pode parar, já encontrou
        }
    }

    if(encontrado) {
        printf("\nO numero %d esta presente no vetor.\n", num);
    } else {
        printf("\nO numero %d NAO foi encontrado no vetor.\n", num);
    }

    return 0;
}
