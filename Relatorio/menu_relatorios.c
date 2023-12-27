#include <stdio.h>
#include <stdlib.h>
#include "menu_relatorios.h"
#include "relatorios.h"
#include "relatorios.c"

void menuRelatorios() {
    char opcao;

    do {
        printf("#####################################################\n");
        printf("##                 Menu de Relatorios               ##\n");
        printf("#####################################################\n");
        printf("##                                                 ##\n");
        printf("##       1 - Gerar Relatario de Clientes           ##\n");
        printf("##       2 - Gerar Relatario Ordenado   	        ##\n");
        printf("##       0 - Voltar ao Menu Principal               ##\n");
        printf("#####################################################\n");
        printf("#####################################################\n");
        printf("Escolha uma opcao:");
        scanf(" %c", &opcao);
        getchar();
        printf("\n");

        switch (opcao) {
            case '1':
                gerarRelatorioGeral();
                printf("Pressione enter para continuar...");
                getchar();
                system("clear || cls");
                break;
            case '2':
            	char signoDesejado[20];
                printf("Informe o signo desejado:       (digite o signo sem acententuacao) ");
                scanf("%19s", signoDesejado);
                listarClientesPorSigno(signoDesejado);
            	printf("Pressione enter para continuar...");
                getchar();

            case '0':
            	printf("Pressione enter para continuar...");
            	getchar();
                system("clear || cls");
                return;

            default:
                system("clear || cls");
                printf("Opcao invalida. Escolha uma opcao valida do menu.\n");
                break;
        }
    } while (opcao != '0');
}
