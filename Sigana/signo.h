#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Clientes/clientes.h"

void sobreSeuSigno(void) {
    int escolhaSigno;

    printf("Escolha o seu signo:\n");
    printf("1 - Áries\n2 - Touro\n3 - Gêmeos\n4 - Câncer\n5 - Leão\n6 - Virgem\n7 - Libra\n8 - Escorpião\n9 - Sagitário\n10 - Capricórnio\n11 - Aquário\n12 - Peixes\n");
    printf("Digite o número correspondente ao seu signo: ");
    scanf("%d", &escolhaSigno);

    // Exibir informações com base na escolha do usuário
    switch (escolhaSigno) {
        case 1:
            printf("Áries: Quem tem sol em Áries costuma viver no agora; além de possuir um grande prazer em existir, ação e decisão também podem ser algumas de suas marcas.\n");
            printf("Planeta: Marte\n");
            break;
        case 2:
            printf("Touro: Quem tem sol em Touro costuma não abrir mão do que traz conforto e bem-estar, mas pode ter a possessividade em evidência.\n");
            printf("Planeta: Vênus\n");
            break;
        case 3:
            printf("Gêmeos: Quem tem sol em Gêmeos costuma ser comunicativo, curioso e versátil.\n");
            printf("Planeta: Mercúrio\n");
            break;
        // Adicione os outros signos aqui com mensagens apropriadas
        case 4:
            printf("Câncer: Quem tem sol em Câncer costuma ser ligado à família, emocional e intuitivo.\n");
            printf("Planeta: Lua\n");
            break;
        case 5:
            printf("Leão: Quem tem sol em Leão costuma ser expressivo, carismático e criativo.\n");
            printf("Planeta: Sol\n");
            break;
        case 6:
            printf("Virgem: Quem tem sol em Virgem costuma ser prático, detalhista e analítico.\n");
            printf("Planeta: Mercúrio\n");
            break;
        case 7:
            printf("Libra: Quem tem sol em Libra costuma buscar harmonia, beleza e equilíbrio nas relações.\n");
            printf("Planeta: Vênus\n");
            break;
        case 8:
            printf("Escorpião: Quem tem sol em Escorpião costuma ser intenso, profundo e determinado.\n");
            printf("Planeta: Plutão\n");
            break;
        case 9:
            printf("Sagitário: Quem tem sol em Sagitário costuma ser otimista, aventureiro e filosófico.\n");
            printf("Planeta: Júpiter\n");
            break;
        case 10:
            printf("Capricórnio: Quem tem sol em Capricórnio costuma ser ambicioso, disciplinado e prudente.\n");
            printf("Planeta: Saturno\n");
            break;
        case 11:
            printf("Aquário: Quem tem sol em Aquário costuma ser original, progressista e humanitário.\n");
            printf("Planeta: Urano\n");
            break;
        case 12:
            printf("Peixes: Quem tem sol em Peixes costuma ser sensível, intuitivo e compassivo.\n");
            printf("Planeta: Netuno\n");
            break;
        default:
            printf("Opção inválida.\n");
            return;
    }
    while (getchar() != '\n');  // Limpar o buffer de entrada
    getchar();  // Aguardar Enter após a mensagem
	system("clear || cls");
}
