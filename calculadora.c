#include <stdio.h>

float PedirNumero(float num1, float num2)
{
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    return num1, num2;
}

float Soma(float num1, float num2)
{
    float PedirNumero(float num1, float num2);
    float resultado = num1 + num2;
    return resultado;
}

float Subtracao(float num1, float num2)
{
    float PedirNumero(float num1, float num2);
    float resultado = num1 - num2;
    return resultado;
}

float Multiplicacao(float num1, float num2)
{
    float PedirNumero(float num1, float num2);
    float resultado = num1 * num2;
    return resultado;
}

float Divisao(float num1, float num2)
{
    float PedirNumero(float num1, float num2);
    float resultado = num1 / num2;
    return resultado;
}

int main()
{
    float num1, num2, resultado;
    int opcao;

    printf("--- Calculadora ---\n\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisão\n");
    printf("0 - Sair\n\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        resultado = Soma(num1, num2);
        printf("O resultado da soma é: %.2f\n", resultado);
        break;
    case 2:
        resultado = Subtracao(num1, num2);
        printf("O resultado da subtracao é: %.2f\n", resultado);
        break;
    case 3:
        resultado = Multiplicacao(num1, num2);
        printf("O resultado da multiplicacao é: %.2f\n", resultado);
        break;
    case 4:
        resultado = Divisao(num1, num2);
        printf("O resultado da divisão é: %.2f\n", resultado);
        break;
    case 0:
        printf("0 - Sair\n");
        break;

    default:
        printf("Opcao Invalida\n");
        break;
    }
}