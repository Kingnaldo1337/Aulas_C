#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "clientes.h"

void cadastrarCliente() {
    Cliente novoCliente;
	system("cls");
    printf("#####################################################\n");
    printf("##             Cadastro de Novo Cliente             ##\n");
    printf("#####################################################\n");

    printf("Nome: ");
    scanf("%s", novoCliente.nome);

    printf("CPF: ");
    scanf("%s", novoCliente.cpf);

    printf("Email: ");
    scanf("%s", novoCliente.email);

    printf("Telefone: ");
    scanf("%s", novoCliente.telefone);

    printf("Signo: ");
    scanf("%s", novoCliente.signo);

    // Abrir o arquivo para escrita (ou criação, se não existir)
    FILE *arquivo = fopen("clientes.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    // Escrever os dados do cliente no arquivo
    fprintf(arquivo, "Nome: %s | CPF: %s | Email: %s | Telefone: %s | Signo: %s\n",
            novoCliente.nome, novoCliente.cpf, novoCliente.email, novoCliente.telefone, novoCliente.signo);

    fclose(arquivo);

    printf("Cadastro realizado com sucesso.\n");
    printf("Pressione enter para continuar.\n");
    getchar();
}

void listarClientes() {
    FILE *arquivo = fopen("clientes.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }
    system("cls");
    printf("#####################################################\n");
    printf("##                Lista de Clientes                ##\n");
    printf("#####################################################\n");

    char linha[100];
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s\n", linha); 
    }

    fclose(arquivo);
}


void apagarCliente() {
    FILE *arquivoEntrada = fopen("clientes.txt", "r");
    FILE *arquivoSaida = fopen("clientes_temp.txt", "w");

    if (arquivoEntrada == NULL || arquivoSaida == NULL) {
    	system("cls");
        printf("Erro ao abrir arquivos para leitura/escrita.\n");
        return;
    }
	system("cls");
    char cpfApagar[15];
    printf("Digite o CPF do cliente a ser apagado: ");
    scanf("%s", cpfApagar);

    char linha[100];
    int encontrado = 0;

    while (fgets(linha, sizeof(linha), arquivoEntrada) != NULL) {
        // Verifica se a linha contém o CPF a ser apagado
        if (strstr(linha, cpfApagar) == NULL) {
            fprintf(arquivoSaida, "%s", linha);
        } else {
            encontrado = 1;
        }

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    if (encontrado) {
        remove("clientes.txt");
        rename("clientes_temp.txt", "clientes.txt");
        printf("Cliente removido com sucesso.\n");
        printf("Pressione enter para continuar.\n");
    	getchar();
    } else {
        printf("Cliente não encontrado.\n");
        printf("Pressione enter para continuar.\n");
    	getchar();
        remove("clientes_temp.txt");
    }
}
}

void modificarCliente() {
    FILE *arquivoEntrada = fopen("clientes.txt", "r");
    FILE *arquivoSaida = fopen("clientes_temp.txt", "w");

    if (arquivoEntrada == NULL || arquivoSaida == NULL) {
        printf("Erro ao abrir arquivos para leitura/escrita.\n");
        printf("Pressione enter para continuar.\n");
    	getchar();
        return;
    }

    char cpfModificar[15];
    printf("Digite o CPF do cliente a ser modificado: ");
    scanf("%s", cpfModificar);

    char linha[100];
    int encontrado = 0;

    while (fgets(linha, sizeof(linha), arquivoEntrada) != NULL) {
        // Verifica se a linha contém o CPF a ser modificado
        if (strstr(linha, cpfModificar) == NULL) {
            fprintf(arquivoSaida, "%s", linha);
        } else {
            encontrado = 1;

            printf("Novo Nome: ");
            scanf("%s", linha);
            fprintf(arquivoSaida, "Nome: %s |", linha);

            printf("Novo CPF: ");
            scanf("%s", linha);
            fprintf(arquivoSaida, " CPF: %s |", linha);

            printf("Novo E-mail: ");
            scanf("%s", linha);
            fprintf(arquivoSaida, " Email: %s |", linha);

            printf("Novo Telefone: ");
            scanf("%s", linha);
            fprintf(arquivoSaida, " Telefone: %s |", linha);

            printf("Novo Signo: ");
            scanf("%s", linha);
            fprintf(arquivoSaida, " Signo: %s\n", linha);
        }
    }

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    if (encontrado) {
        remove("clientes.txt");
        rename("clientes_temp.txt", "clientes.txt");
        printf("Cliente modificado com sucesso.\n");
        printf("Pressione enter para continuar.\n");
    	getchar();
    } else {
        printf("Cliente não encontrado.\n");
        printf("Pressione enter para continuar.\n");
    	getchar();
        remove("clientes_temp.txt");
    }
}