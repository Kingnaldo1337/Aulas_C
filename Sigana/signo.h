void sobreSeuSigno(void) {
    char cpf[15];

    printf("Digite seu CPF para ver informa��es sobre seu signo: ");
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

            // Remove espa�os em branco antes e depois do signo
            signoCliente = strtok(signo, " ");
            break;
        }
    }

    fclose(arquivo);

    if (!encontrado) {
        printf("CPF n�o encontrado. Cadastre-se para obter informa��es sobre seu signo.\n");
    } else {
        system("cls");
        printf("#####################################################\n");
        printf("##      Informa��es sobre o seu Signo - %s           ##\n", signoCliente);
        printf("#####################################################\n");

        // Compara��o do signo para exibir as informa��es correspondentes
        if (strcmp(signoCliente, "�ries") == 0) {
            printf("Quem tem sol em �ries costuma viver no agora; al�m de possuir um grande prazer em existir, a��o e decis�o tamb�m podem ser algumas de suas marcas. A lideran�a � uma caracter�stica forte no signo, que pode ser usada para o empreendedorismo.\n");
            printf("Planeta: Marte\n");
        } else if (strcmp(signoCliente, "Touro") == 0) {
            printf("Quem tem sol em Touro costuma n�o abrir m�o do que traz conforto e bem-estar, mas pode ter a possessividade em evid�ncia. O signo preza pela beleza f�sica e pela gula. A satisfa��o de Touro vem do contato com todos os cinco sentidos.\n");
            printf("Planeta: V�nus\n");
        } // Continue adicionando os outros casos conforme necess�rio

        printf("Pressione enter para continuar...");
        getchar();
    }
}