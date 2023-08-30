#include <stdio.h>
#include <stdlib.h>
#include "cigana.h"
#include <time.h>

int main() {
    srand(time(NULL));

    char opcao;

    do {
    	limpartela();
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
        printf("##       1 - Leitura de Cartas de Tar�              ##\n");
        printf("##       2 - Hor�scopo Di�rio                      ##\n");
        printf("##       3 - Sobre Seu Signo                       ##\n");
        printf("##       0 - Sair                                  ##\n");
        printf("#####################################################\n");
        printf("#####################################################\n");
        printf("    Escolha uma op��o:");
        scanf(" %c", &opcao); // Note o espa�o antes de %c para consumir o caractere de nova linha anterior
        getchar(); // Limpar o caractere de nova linha
        printf("\n");

        switch (opcao) {
            case '1':
            	limpartela();
                leituraDeCartas();
                break;

            case '2':
                horoscopoDiario();
                continuar();
                break;
            

            case '3':
            	limpartela();
                sobreSeuSigno();
                break;

            case '0':
            	limpartela();
                printf("Saindo do programa...\n");
                break;

            default:
            	limpartela();
                printf("Op��o inv�lida. Escolha uma op��o v�lida do menu.\n");
                break;
        }

    } while (opcao != '0');

    return 0;
}
