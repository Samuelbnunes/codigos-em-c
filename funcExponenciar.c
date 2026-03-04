#include <stdio.h>

float ExponenciarAoQuadrado(float base) {
    float expoente = base;
    float resultado = base * expoente;
    return resultado;
}

int main() {
    float base, resultado;
    printf("Digite um numero:");
    scanf("%f", &base);
    resultado = ExponenciarAoQuadrado(base);
    printf("O resultado é: %.2f\n", resultado);
    return 0;
}