#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "clientes.h"

void menuPrincipal();
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
        printf("Escolha uma opcao:");
        scanf(" %c", &opcaoClientes);
        getchar(); // Limpar o caractere de nova linha
        printf("\n");

        switch (opcaoClientes) {
            case '1':
                cadastrarCliente();
                printf("Pressione enter para continuar...");
                getchar();
                system("clear || cls");
                break;

            case '2':
                listarClientes();
                printf("Pressione enter para continuar...");
                getchar();
                system("clear || cls");
                break;

            case '3':
                apagarCliente();
                printf("Pressione enter para continuar...");
                getchar();
                system("clear || cls");
                break;

            case '4':
                modificarCliente();
                printf("Pressione enter para continuar...");
                getchar();
                system("clear || cls");
                break;

            case '0':
				system("clear || cls");
                menuPrincipal();
                printf("Pressione enter para continuar...");
                getchar();
                return;

            default:
                system("clear || cls");
                printf("Opcao invalida. Escolha uma opcao valida do menu.\n");
                break;
        }
    } while (opcaoClientes != '0');
}