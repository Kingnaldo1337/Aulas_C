#include <stdio.h>
#include <stdlib.h>
#include "menu_relatorios.h"
#include "relatorios.h"
#include "relatorios.c"

void menuRelatorios() {
    char opcao;

    do {
        printf("#####################################################\n");
        printf("##                 Menu de Relat�rios               ##\n");
        printf("#####################################################\n");
        printf("##                                                 ##\n");
        printf("##       1 - Gerar Relat�rio de Clientes           ##\n");
        printf("##       2 - Gerar Relat�rio Ordenado   	        ##\n");
        printf("##       0 - Voltar ao Menu Principal               ##\n");
        printf("#####################################################\n");
        printf("#####################################################\n");
        printf("Escolha uma op��o:");
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
                printf("Op��o inv�lida. Escolha uma op��o v�lida do menu.\n");
                break;
        }
    } while (opcao != '0');
}
