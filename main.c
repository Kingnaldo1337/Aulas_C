#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Sigana/cigana.h"
#include "Sigana/signo.h"
#include "Sigana/horoscopo.h"
#include "Sigana/cartas.h"
#include "Clientes/clientes.h"
#include "Clientes/menu_clientes.h"
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
    FILE *arquivo = fopen("dados_de_login.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 0; // Falha ao salvar
    }

    // Escrever o login e a senha no arquivo
    fprintf(arquivo, "Login: %s | Senha: %s\n", login, senha);

    fclose(arquivo);

    printf("Login bem-sucedido. Dados de login salvos.\n");
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
        printf("##       2 - Leitura de Cartas                     ##\n");
        printf("##       3 - Horoscopo Diario                      ##\n");
        printf("##       4 - Sobre Seu Signo                       ##\n");
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
                leituraDeCartas();
                printf("Pressione enter para continuar...");
                getchar();
                system("cls");
                break;

            case '3':
                horoscopoDiario();
                printf("Pressione enter para continuar...");
                getchar();
                system("cls");
                break;

            case '4':
                sobreSeuSigno();
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
