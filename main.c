#include <stdio.h>
#include <stdlib.h>
#include "cigana.h"
#include "cartas.h"
#include "horoscopo.h"
#include "signo.h"
#include <time.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
    srand(time(NULL));

    char opcao;
	  do{
	    
        printf("#####################################################\n");
        printf("#####################################################\n");
        printf("##                 Sigana Virtual                  ##\n");
        printf("##Desenvolvedor: Reinaldo Alves Pereira Junior     ##\n");
        printf("##Curso: Sistemas de Informa��o 2o periodo         ##\n");
        printf("##Instagram: @r3inaldo_jr)                         ##\n");
        printf("##Jardim do serid� RN                              ##\n");
        printf("#####################################################\n");
        printf("#####################################################\n");
        printf("##                                                 ##\n");
        printf("##       1 - Leitura de Cartas de Tar�             ##\n");
        printf("##       2 - Hor�scopo Di�rio                      ##\n");
        printf("##       3 - Sobre Seu Signo                       ##\n");
        printf("##       0 - Sair                                  ##\n");
        printf("#####################################################\n");
        printf("#####################################################\n");
        printf("Escolha uma op��o:");
        scanf(" %c", &opcao);
        getchar(); // Limpar o caractere de nova linha
        printf("\n");

        switch (opcao) {
            case '1':
                leituraDeCartas();
                printf("Pressione enter para continuar...");
				getchar();
				system("clear");
                break;

            case '2':
                horoscopoDiario();
                printf("Pressione enter para continuar...");
				getchar();
				system("clear");
                break;
            

            case '3':
            	sobreSeuSigno();
                printf("Pressione enter para continuar...");
				getchar();
				system("clear");
                break;

            case '0':
            	system("clear");
                printf("Saindo do programa...\n");
                break;

            default:
            	system("clear");
                printf("Op��o inv�lida. Escolha uma op��o v�lida do menu.\n");
                break;
        }

    } while (opcao != '0');
}

