/*Enunciado:Q2
MENU DE OPÇÕES COM SUB-MENU – Crie uma aplicação que consiste em um menu com sub-menus,
esta aplicação deverá corresponder a um sistema de cadastro conforme o exemplo abaixo, por hora,
o sistema de menu deverá apenas apresentar mensagens dizendo “Pressionada a opção XX” após
seleção de cada opção, note também que ao entrar em um determinado sub-menu, o sistema deverá
ficar neste até sair, e quando sair dele deve voltar para o menu principal. Dica: Utilize um looping para
o menu principal, dentro dele, identifique a sub-opção digitada, e então crie outro looping interno para
controle das opções dos sub-menus.
..:: MENU SISTEMA CLIENTES ::..
1. CLIENTES
11. CADASTRAR CLIENTE
12. ALTERAR CLIENTE
13. PESQUISAR CLIENTE
14. EXCLUIR CLIENTE
19. SAIR
2. FORNECEDORES
21. CADASTRAR FORNECEDOR
22. ALTERAR FORNECEDOR
23. PESQUISAR FORNECEDOR
24. EXCLUIR FORNECEDOR
29. SAIR
3. CIDADES
31. CADASTRAR CIDADE
32. ALTERAR CIDADE
33. PESQUISAR CIDADE
34. EXCLUIR CIDADE
39. SAIR
9. SAIR
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int opcao;

    while (1) { // Loop infinito para o menu principal
        printf("..:: MENU SISTEMA CLIENTES ::..\n");
        printf("1. CLIENTES\n");
        printf("2. FORNECEDORES\n");
        printf("3. CIDADES\n");
        printf("9. SAIR\n");

        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                while (1) { // Loop infinito para o submenu CLIENTES
                    printf("..:: MENU CLIENTES ::..\n");
                    printf("11. CADASTRAR CLIENTE\n");
                    printf("12. ALTERAR CLIENTE\n");
                    printf("13. PESQUISAR CLIENTE\n");
                    printf("14. EXCLUIR CLIENTE\n");
                    printf("19. SAIR\n");

                    printf("Digite a opção desejada: ");
                    scanf("%d", &opcao);

                    switch (opcao) {
                        case 11:
                            printf("Pressionada a opção 11 - CADASTRAR CLIENTE\n");
                            break;
                        case 12:
                            printf("Pressionada a opção 12 - ALTERAR CLIENTE\n");
                            break;
                        case 13:
                            printf("Pressionada a opção 13 - PESQUISAR CLIENTE\n");
                            break;
                        case 14:
                            printf("Pressionada a opção 14 - EXCLUIR CLIENTE\n");
                            break;
                        case 19:
                            printf("Saindo do submenu CLIENTES\n");
                            break;
                        default:
                            printf("Opção inválida\n");
                    }

                    if (opcao == 19) {
                        break; // Sai do loop do submenu CLIENTES
                    }
                }
                break;
            case 2:
                // Implemente o submenu FORNECEDORES de forma semelhante ao submenu CLIENTES
                break;
            case 3:
                // Implemente o submenu CIDADES de forma semelhante ao submenu CLIENTES
                break;
            case 9:
                printf("Saindo do programa\n");
                return 0; // Encerra o programa
            default:
                printf("Opção inválida\n");
        }
    }

    return 0;
}

