#include <stdio.h>

float Comparar(float valor1, float valor2) {
    if (valor1 > valor2) {
        return valor2;
    } else {
        return valor1;
    }
}

int main() {
    float valor1, valor2, resultado;
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);
    resultado = Comparar(valor1, valor2);
    printf("O menor valor é: %.2f\n", resultado);

}