#include <stdio.h>
#include <stdlib.h>
#include "menu_relatorios.h"
#include "relatorios.h"
#include "relatorios.c"

void menuRelatorios() {
    char opcao;

    do {
        printf("#####################################################\n");
        printf("##                 Menu de Relatórios               ##\n");
        printf("#####################################################\n");
        printf("##                                                 ##\n");
        printf("##       1 - Gerar Relatório de Clientes           ##\n");
        printf("##       2 - Gerar Relatório Ordenado   	        ##\n");
        printf("##       0 - Voltar ao Menu Principal               ##\n");
        printf("#####################################################\n");
        printf("#####################################################\n");
        printf("Escolha uma opção:");
        scanf(" %c", &opcao);
        getchar(); // Limpar o caractere de nova linha
        printf("\n");

        switch (opcao) {
            case '1':
                gerarRelatorio();
                printf("Pressione enter para continuar...");
                getchar();
                system("clear || cls");
                break;
            case '2':
            	relatorio_ordenado();
            	printf("Pressione enter para continuar...");
                getchar();
                system("clear || cls");

            case '0':
            	printf("Pressione enter para continuar...");
            	getchar();
                system("clear || cls");
                return;

            default:
                system("clear || cls");
                printf("Opção inválida. Escolha uma opção válida do menu.\n");
                break;
        }
    } while (opcao != '0');
}
