#include <stdio.h>

int main()
{
    float distancia, consumo, preco;
    float litrosGastos, custoTotal;

    printf("=== CALCULADOR DE GASTO DE COMBUSTIVEL ===\n");

    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &distancia);

    printf("Digite o consumo do veiculo (km/litro): ");
    scanf("%f", &consumo);

    printf("Digite o preco do combustivel (R$/litro): ");
    scanf("%f", &preco);

    // Calcular litros gastos
    litrosGastos = distancia / consumo;

    // Calcular custo total
    custoTotal = litrosGastos * preco;

    // Exibir resultados
    printf("\n=== RESULTADO ===\n");
    printf("Litros gastos: %.2f L\n", litrosGastos);
    printf("Custo total: R$ %.2f\n", custoTotal);

    return 0;
}