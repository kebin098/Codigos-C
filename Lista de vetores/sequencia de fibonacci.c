#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, prox;

    printf("Digite a quantidade de termos da sequencia de Fibonacci: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a);
        prox = a + b;
        a = b;
        b = prox;
    }

    return 0;
}
