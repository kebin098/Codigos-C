#include <stdio.h>

int main() {
    double d1, d2, d3, maior;

    printf("Digite as tres distancias: ");
    scanf("%lf %lf %lf", &d1, &d2, &d3);

    maior = d1;
    if (d2 > maior) maior = d2;
    if (d3 > maior) maior = d3;

    printf("Maior distancia = %.2lf\n", maior);

    return 0;
}
