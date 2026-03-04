#include <stdio.h>

int main() {
    float g1, g2, media, nota_exame, media_final;

    printf("Digite a nota da G1: ");
    scanf("%f", &g1);

    printf("Digite a nota da G2: ");
    scanf("%f", &g2);

    media = (g1 + g2) / 2;
    printf("Media calculada: %.2f\n", media);

    if (media >= 7.0) {
        printf("Aluno aprovado!\n");
    } else if (media >= 3.0) {
        printf("Aluno em exame. Digite a nota do exame: ");
        scanf("%f", &nota_exame);
        media_final = (nota_exame + media) / 2;
        printf("Media final: %.2f\n", media_final);
        if (media_final >= 5.0) {
            printf("Aluno aprovado!\n");
        } else {
            printf("Aluno reprovado.\n");
        }
    } else {
        printf("Aluno reprovado direto.\n");
    }
    return 0;
}