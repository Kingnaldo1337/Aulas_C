#include <stdio.h>
#include <stdlib.h>
#include "cigana.h" 
#include "cartas.h"
#include "horoscopo.h"
#include "signo.h"
#include <locale.h>
#include <string.h>

void menuCigana() {
    char opcao;

    do {
        printf("#####################################################\n");
        printf("##               Menu Cigana                        ##\n");
        printf("#####################################################\n");
        printf("##                                                 ##\n");
        printf("##       1 - Leitura de Cartas                     ##\n");
        printf("##       2 - Horoscopo Diario                      ##\n");
        printf("##       3 - Sobre Seu Signo                       ##\n");
        printf("##       0 - Voltar ao Menu Principal               ##\n");
        printf("#####################################################\n");
        printf("#####################################################\n");
        printf("Escolha uma opcao:");
        scanf(" %c", &opcao);
        getchar(); // Limpar o caractere de nova linha
        printf("\n");

        switch (opcao) {
            case '1':
                leituraDeCartas();
                printf("Pressione enter para continuar...");
                getchar();
                system("clear || cls");
                break;

            case '2':
                horoscopoDiario();
                printf("Pressione enter para continuar...");
                getchar();
                system("clear || cls");
                break;

            case '3':
            	system("clear || cls");
                sobreSeuSigno();
                printf("Pressione enter para continuar...");
                getchar();
                break;

            case '0':
                system("clear || cls");
                return;

            default:
                system("clear || cls");
                printf("Opcao invalida. Escolha uma opcao v�lida do menu.\n");
                break;
        }
    } while (opcao != '0');
}
