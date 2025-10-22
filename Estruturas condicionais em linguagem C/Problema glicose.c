#include <stdio.h>

int main() {
    double glicose;

    printf("Digite a medida da glicose: ");
    scanf("%lf", &glicose);

    if (glicose <= 100.0) {
        printf("Classificacao: Normal\n");
    } else if (glicose <= 140.0) {
        printf("Classificacao: Elevado\n");
    } else {
        printf("Classificacao: Diabetes\n");
    }

    return 0;
}
