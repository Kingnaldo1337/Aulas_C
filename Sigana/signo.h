#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Clientes/clientes.h"

void sobreSeuSigno(void) {
    int escolhaSigno;

    printf("Escolha o seu signo:\n");
    printf("1 - �ries\n2 - Touro\n3 - G�meos\n4 - C�ncer\n5 - Le�o\n6 - Virgem\n7 - Libra\n8 - Escorpi�o\n9 - Sagit�rio\n10 - Capric�rnio\n11 - Aqu�rio\n12 - Peixes\n");
    printf("Digite o n�mero correspondente ao seu signo: ");
    scanf("%d", &escolhaSigno);

    // Exibir informa��es com base na escolha do usu�rio
    switch (escolhaSigno) {
        case 1:
            printf("�ries: Quem tem sol em �ries costuma viver no agora; al�m de possuir um grande prazer em existir, a��o e decis�o tamb�m podem ser algumas de suas marcas.\n");
            printf("Planeta: Marte\n");
            break;
        case 2:
            printf("Touro: Quem tem sol em Touro costuma n�o abrir m�o do que traz conforto e bem-estar, mas pode ter a possessividade em evid�ncia.\n");
            printf("Planeta: V�nus\n");
            break;
        case 3:
            printf("G�meos: Quem tem sol em G�meos costuma ser comunicativo, curioso e vers�til.\n");
            printf("Planeta: Merc�rio\n");
            break;
        // Adicione os outros signos aqui com mensagens apropriadas
        case 4:
            printf("C�ncer: Quem tem sol em C�ncer costuma ser ligado � fam�lia, emocional e intuitivo.\n");
            printf("Planeta: Lua\n");
            break;
        case 5:
            printf("Le�o: Quem tem sol em Le�o costuma ser expressivo, carism�tico e criativo.\n");
            printf("Planeta: Sol\n");
            break;
        case 6:
            printf("Virgem: Quem tem sol em Virgem costuma ser pr�tico, detalhista e anal�tico.\n");
            printf("Planeta: Merc�rio\n");
            break;
        case 7:
            printf("Libra: Quem tem sol em Libra costuma buscar harmonia, beleza e equil�brio nas rela��es.\n");
            printf("Planeta: V�nus\n");
            break;
        case 8:
            printf("Escorpi�o: Quem tem sol em Escorpi�o costuma ser intenso, profundo e determinado.\n");
            printf("Planeta: Plut�o\n");
            break;
        case 9:
            printf("Sagit�rio: Quem tem sol em Sagit�rio costuma ser otimista, aventureiro e filos�fico.\n");
            printf("Planeta: J�piter\n");
            break;
        case 10:
            printf("Capric�rnio: Quem tem sol em Capric�rnio costuma ser ambicioso, disciplinado e prudente.\n");
            printf("Planeta: Saturno\n");
            break;
        case 11:
            printf("Aqu�rio: Quem tem sol em Aqu�rio costuma ser original, progressista e humanit�rio.\n");
            printf("Planeta: Urano\n");
            break;
        case 12:
            printf("Peixes: Quem tem sol em Peixes costuma ser sens�vel, intuitivo e compassivo.\n");
            printf("Planeta: Netuno\n");
            break;
        default:
            printf("Op��o inv�lida.\n");
            return;
    }
    while (getchar() != '\n');  // Limpar o buffer de entrada
    getchar();  // Aguardar Enter ap�s a mensagem
	system("clear || cls");
}
