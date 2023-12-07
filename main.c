#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Clientes/clientes.h"
#include "Clientes/menu_clientes.h"
#include "Sigana/menu_cigana.h"
#include <time.h>
#include <locale.h>




int fazerLogin() {
    char login[50];
    char senha[50];

    printf("#####################################################\n");
    printf("##               Faça o Login                       ##\n");
    printf("#####################################################\n");

    printf("Login: ");
    scanf("%s", login);
    printf("Senha: ");
    scanf("%s", senha);

    // Abrir o arquivo para escrita (ou criação, se não existir)
    FILE *arquivo = fopen("dados_de_login.dat", "ab");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 0; // Falha ao salvar
    }

    // Escrever o login e a senha no arquivo binário
    fwrite(login, sizeof(char), sizeof(login), arquivo);
    fwrite(senha, sizeof(char), sizeof(senha), arquivo);

    fclose(arquivo);

    printf("Login bem-sucedido. Dados de login salvos.\n");
    getchar();
    system("cls");
    return 1; // Login bem-sucedido
}

void menuPrincipal() {
    char opcao;

    do {
        printf("#####################################################\n");
        printf("#####################################################\n");
        printf("##                 Sigana Virtual                  ##\n");
        printf("##Desenvolvedor: Reinaldo Alves Pereira Junior     ##\n");
        printf("##Curso: Sistemas de Informação 2o periodo         ##\n");
        printf("##Instagram: @r3inaldo_jr)                         ##\n");
        printf("##Jardim do seridó RN                              ##\n");
        printf("#####################################################\n");
        printf("#####################################################\n");
        printf("##                                                 ##\n");
        printf("##       1 - Cliente                               ##\n");
		printf("##       2 - Cigana                                ##\n");
        printf("##       0 - Sair                                  ##\n");
        printf("#####################################################\n");
        printf("#####################################################\n");
        printf("Escolha uma opção:");
        scanf(" %c", &opcao);
        getchar(); // Limpar o caractere de nova linha
        printf("\n");

        switch (opcao) {
            case '1':
                menuClientes();
                system("cls");
                getchar();
                break;

            case '2':
                menuCigana();
                printf("Pressione enter para continuar...");
                getchar();
                system("cls");
                break;
            
            case '0':
                system("cls");
                printf("Saindo do programa...\n");
                break;

            default:
                system("cls");
                printf("Opção inválida. Escolha uma opção válida do menu.\n");
                break;
        }
    } while (opcao != '0');
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    srand(time(NULL));

    int loginSucesso = 0;

    do {
        loginSucesso = fazerLogin();
    } while (!loginSucesso);

    menuPrincipal();

    return 0;
}
