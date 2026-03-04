#include <stdio.h>

float Soma(float valor1, float valor2) {
    return valor1 + valor2;
}

int main() {
    float valor1, valor2, resultado;
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);
    resultado = Soma(valor1, valor2);
    printf("O resultado da soma é: %.2f\n", resultado);
    return 0;
}