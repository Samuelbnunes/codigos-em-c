#include <stdio.h>

int main() {
    float peso, altura, imc;
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    printf("Seu IMC é: %.2f\n", imc);
    if (imc < 18.5) {
        printf("Abaixo do peso normal\n");
    } else if (imc <= 24.9) {
        printf("Peso normal \n");
    } else if (imc <= 29.9) {
        printf("Excesso de peso\n");
    } else if (imc <= 34.9) {
        printf("Obesidade Classe I\n");
    } else if (imc <= 39.9) {
        printf("Obesidade Classe II\n");
    } else {
        printf("Obesidade Classe III\n");
    }
    return 0;
}