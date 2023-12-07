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
        printf("Escolha uma opção:");
        scanf(" %c", &opcao);
        getchar(); // Limpar o caractere de nova linha
        printf("\n");

        switch (opcao) {
            case '1':
                leituraDeCartas();
                printf("Pressione enter para continuar...");
                getchar();
                system("cls");
                break;

            case '2':
                horoscopoDiario();
                printf("Pressione enter para continuar...");
                getchar();
                system("cls");
                break;

            case '3':
                sobreSeuSigno();
                printf("Pressione enter para continuar...");
                getchar();
                system("cls");
                break;

            case '0':
                system("cls");
                return;

            default:
                system("cls");
                printf("Opção inválida. Escolha uma opção válida do menu.\n");
                break;
        }
    } while (opcao != '0');
}