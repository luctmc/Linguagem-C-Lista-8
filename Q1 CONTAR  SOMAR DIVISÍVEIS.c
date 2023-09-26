/*Enunciado: Q1
CONTAR/SOMAR DIVISÍVEIS – Crie uma aplicação que deverá solicitar três valores inteiros A, B e C do
usuário, o programa deve percorrer todos os números de A até B e então deverá ‘somar’ e ‘contar’
todos os valores deste intervalo que são divisíveis por C. Por exemplo, para os valores: 2 (a), 13 (b) e 3
(c), neste caso, o programa deverá iniciar no valor 2 e ir até 13 (2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13),
durante o processamento, deverá verificar quais desses valores é divisível por 3, que no caso são, 3, 6,
9, 12, e realizar a soma destes valores. Baseado nesse cenário, a resposta deverá apresentar o número
de valores divisíveis (no caso 4) e a soma destes valores divisíveis (no caso 30).
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int A, B, C;
    int count = 0; // Inicializa o contador de valores divisíveis
    int sum = 0;   // Inicializa a soma dos valores divisíveis

    // Solicita os valores A, B e C ao usuário
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    // Verifica se C é igual a zero (divisão por zero não é permitida)
    if (C == 0) {
        printf("Erro: Divisão por zero não é permitida.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Percorre os números de A até B
    for (int i = A; i <= B; i++) {
        // Verifica se o número é divisível por C
        if (i % C == 0) {
            count++; // Incrementa o contador de valores divisíveis
            sum += i; // Adiciona o valor à soma
        }
    }

    // Exibe o número de valores divisíveis e a soma
    printf("Número de valores divisíveis por %d: %d\n", C, count);
    printf("Soma dos valores divisíveis por %d: %d\n", C, sum);

    return 0;
}
