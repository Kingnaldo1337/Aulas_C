void sobreSeuSigno(void) {
    char cpf[15];

    printf("Digite seu CPF para ver informações sobre seu signo: ");
    scanf("%s", cpf);

    FILE *arquivo = fopen("clientes.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }

    char linha[100];
    int encontrado = 0;
    char *signoCliente = NULL;

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        if (strstr(linha, cpf) != NULL) {
            encontrado = 1;

            // Extrai o signo da linha
            char *signo = strtok(linha, "|");
            signo = strtok(NULL, "|");

            // Remove espaços em branco antes e depois do signo
            signoCliente = strtok(signo, " ");
            break;
        }
    }

    fclose(arquivo);

    if (!encontrado) {
        printf("CPF não encontrado. Cadastre-se para obter informações sobre seu signo.\n");
    } else {
        system("cls");
        printf("#####################################################\n");
        printf("##      Informações sobre o seu Signo - %s           ##\n", signoCliente);
        printf("#####################################################\n");

        // Comparação do signo para exibir as informações correspondentes
        if (strcmp(signoCliente, "Áries") == 0) {
            printf("Quem tem sol em Áries costuma viver no agora; além de possuir um grande prazer em existir, ação e decisão também podem ser algumas de suas marcas. A liderança é uma característica forte no signo, que pode ser usada para o empreendedorismo.\n");
            printf("Planeta: Marte\n");
        } else if (strcmp(signoCliente, "Touro") == 0) {
            printf("Quem tem sol em Touro costuma não abrir mão do que traz conforto e bem-estar, mas pode ter a possessividade em evidência. O signo preza pela beleza física e pela gula. A satisfação de Touro vem do contato com todos os cinco sentidos.\n");
            printf("Planeta: Vênus\n");
        } // Continue adicionando os outros casos conforme necessário

        printf("Pressione enter para continuar...");
        getchar();
    }
}