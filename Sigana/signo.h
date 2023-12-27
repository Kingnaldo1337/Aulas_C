#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Clientes/clientes.h"

void sobreSeuSigno(void) {
    int escolhaSigno;

    printf("Escolha o seu signo:\n");
    printf("1 - aries\n2 - Touro\n3 - Gemeos\n4 - Cancer\n5 - Leao\n6 - Virgem\n7 - Libra\n8 - Escorpiao\n9 - Sagitario\n10 - Capric�rnio\n11 - Aquario\n12 - Peixes\n");
    printf("Digite o numero correspondente ao seu signo: ");
    scanf("%d", &escolhaSigno);

    // Exibir informa��es com base na escolha do usu�rio
    switch (escolhaSigno) {
        case 1:
            printf("aries: Quem tem sol em aries costuma viver no agora; al�m de possuir um grande prazer em existir, acao e decisao tambem podem ser algumas de suas marcas.\n");
            printf("Planeta: Marte\n");
            break;
        case 2:
            printf("Touro: Quem tem sol em Touro costuma nao abrir mao do que traz conforto e bem-estar, mas pode ter a possessividade em evidencia.\n");
            printf("Planeta: Venus\n");
            break;
        case 3:
            printf("Gemeos: Quem tem sol em Gemeos costuma ser comunicativo, curioso e versatil.\n");
            printf("Planeta: Mercurio\n");
            break;
        case 4:
            printf("Cancer: Quem tem sol em Cancer costuma ser ligado a familia, emocional e intuitivo.\n");
            printf("Planeta: Lua\n");
            break;
        case 5:
            printf("Leao: Quem tem sol em Leao costuma ser expressivo, carismatico e criativo.\n");
            printf("Planeta: Sol\n");
            break;
        case 6:
            printf("Virgem: Quem tem sol em Virgem costuma ser pratico, detalhista e analitico.\n");
            printf("Planeta: Merc�rio\n");
            break;
        case 7:
            printf("Libra: Quem tem sol em Libra costuma buscar harmonia, beleza e equilibrio nas relacoes.\n");
            printf("Planeta: Venus\n");
            break;
        case 8:
            printf("Escorpiao: Quem tem sol em Escorpiao costuma ser intenso, profundo e determinado.\n");
            printf("Planeta: Plutao\n");
            break;
        case 9:
            printf("Sagitario: Quem tem sol em Sagitario costuma ser otimista, aventureiro e filosofico.\n");
            printf("Planeta: Jupiter\n");
            break;
        case 10:
            printf("Capricornio: Quem tem sol em Capricornio costuma ser ambicioso, disciplinado e prudente.\n");
            printf("Planeta: Saturno\n");
            break;
        case 11:
            printf("Aquario: Quem tem sol em Aquario costuma ser original, progressista e humanitario.\n");
            printf("Planeta: Urano\n");
            break;
        case 12:
            printf("Peixes: Quem tem sol em Peixes costuma ser sens�vel, intuitivo e compassivo.\n");
            printf("Planeta: Netuno\n");
            break;
        default:
            printf("Opcao invalida.\n");
            return;
    }
    while (getchar() != '\n');  // Limpar o buffer de entrada
    getchar();  // Aguardar Enter apos a mensagem
	system("clear || cls");
}
