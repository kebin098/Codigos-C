#include <stdio.h>

int main() {
    int n, i;
    long long fatorial = 1; // long long para suportar valores grandes

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Fatorial nao existe para numeros negativos.\n");
    } else {
        for(i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d é: %lld\n", n, fatorial);
    }

    return 0;
}
