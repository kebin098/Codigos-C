#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Digite a nota do primeiro semestre: ");
    scanf("%f", &nota1);
    printf("Digite a nota do segundo semestre: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2.0;

    printf("Nota final = %.2f\n", media);

    if (media < 60.0) {
        printf("REPROVADO\n");
    }

    return 0;
}
