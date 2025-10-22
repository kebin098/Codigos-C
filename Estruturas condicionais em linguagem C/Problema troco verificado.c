#include <stdio.h>

int main() {
    double preco_unit, dinheiro;
    int qtd;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco_unit);
    printf("Quantidade comprada: ");
    scanf("%d", &qtd);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    double total = preco_unit * qtd;

    if (dinheiro >= total) {
        printf("TROCO = %.2lf\n", dinheiro - total);
    } else {
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf\n", total - dinheiro);
    }

    return 0;
}
