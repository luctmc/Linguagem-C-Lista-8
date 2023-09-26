/*Enunciado:Q3
IDENTIFICAR MENOR/MAIOR, PERCORRER INTERVALO, CONTAR SOMAR DIVISIVEIS – Crie uma
aplicação que deverá solicitar 4 valores inteiros em qualquer ordem do usuário, identifique qual é o
menor e maior valor e então percorras todos os valores deste intervalo, durante o processamento,
verifique quantos valores dentro deste intervalo são divisíveis pelos outros dois valores que foram
informados, o programa deverá então contar e somar todos os valores que são divisíveis.
Lucas Timponi Mercadante Castro | Ra:2304913*/
#include <stdio.h>

int main() {
    int valores[4];
    int menor, maior;

    // Solicitar os 4 valores do usuário
    printf("Digite 4 valores inteiros em qualquer ordem:\n");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &valores[i]);
    }

    // Encontrar o menor e o maior valor
    menor = maior = valores[0];
    for (int i = 1; i < 4; i++) {
        if (valores[i] < menor) {
            menor = valores[i];
        }
        if (valores[i] > maior) {
            maior = valores[i];
        }
    }

    // Inicializar contadores para divisíveis
    int divisivelContador = 0;
    int divisivelSoma = 0;

    // Percorrer todos os valores no intervalo entre menor e maior
    for (int i = menor; i <= maior; i++) {
        // Verificar se i é divisível pelos outros dois valores informados
        if (i % valores[0] == 0 && i % valores[1] == 0) {
            divisivelContador++;
            divisivelSoma += i;
        }
    }

    // Exibir resultados
    printf("Menor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);
    printf("Quantidade de valores divisíveis por %d e %d: %d\n", valores[0], valores[1], divisivelContador);
    printf("Soma dos valores divisíveis: %d\n", divisivelSoma);

    return 0;
}
