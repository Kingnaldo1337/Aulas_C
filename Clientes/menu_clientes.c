#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "clientes.h"

void menuClientes() {
    char opcaoClientes;

    do {
        printf("#####################################################\n");
        printf("##                 Menu de Clientes                ##\n");
        printf("#####################################################\n");
        printf("##                                                 ##\n");
        printf("##       1 - Cadastrar Cliente                      ##\n");
        printf("##       2 - Listar Clientes                        ##\n");
        printf("##       3 - Apagar Cliente                         ##\n");
        printf("##       4 - Modificar Cliente                      ##\n");
        printf("##       0 - Voltar ao Menu Principal               ##\n");
        printf("#####################################################\n");
        printf("#####################################################\n");
        printf("Escolha uma opção:");
        scanf(" %c", &opcaoClientes);
        getchar(); // Limpar o caractere de nova linha
        printf("\n");

        switch (opcaoClientes) {
            case '1':
                cadastrarCliente();
                printf("Pressione enter para continuar...");
                getchar();
                system("cls");
                break;

            case '2':
                listarClientes();
                printf("Pressione enter para continuar...");
                getchar();
                system("cls");
                break;

            case '3':
                apagarCliente();
                printf("Pressione enter para continuar...");
                getchar();
                system("cls");
                break;

            case '4':
                modificarCliente();
                printf("Pressione enter para continuar...");
                getchar();
                system("cls");
                break;

            case '0':
                // Voltar ao Menu Principal
                return;

            default:
                system("cls");
                printf("Opção inválida. Escolha uma opção válida do menu.\n");
                break;
        }
    } while (opcaoClientes != '0');
}