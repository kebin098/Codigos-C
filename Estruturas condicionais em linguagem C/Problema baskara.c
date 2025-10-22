#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Nao e equacao de segundo grau.\n");
    } else {
        delta = b*b - 4*a*c;

        if (delta < 0) {
            printf("A equacao nao possui raizes reais.\n");
        } else {
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("X1 = %.4lf\n", x1);
            printf("X2 = %.4lf\n", x2);
        }
    }

    return 0;
}
