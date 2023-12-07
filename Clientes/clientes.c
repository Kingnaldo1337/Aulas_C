#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "clientes.h"

void escolherSigno(char *signo) {
    // Exibir opções de signos
    printf("Escolha o signo:\n");
    printf("1 - Áries\n");
    printf("2 - Touro\n");
    // Adicione as opções para outros signos conforme necessário

    int opcao;
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            strcpy(signo, "Áries");
            break;
        case 2:
            strcpy(signo, "Touro");
            break;
        // Adicione os cases para outros signos conforme necessário
        default:
            printf("Opção inválida.\n");
            break;
    }
}

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

    escolherSigno(novoCliente.signo);

    // Abrir o arquivo para escrita (ou criação, se não existir)
    FILE *arquivo = fopen("clientes.dat", "ab");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    // Escrever os dados do cliente no arquivo
    fwrite(&novoCliente, sizeof(Cliente), 1, arquivo);

    fclose(arquivo);

    printf("Cadastro realizado com sucesso.\n");
    printf("Pressione enter para continuar.\n");
    getchar();
}
int compararClientes(const void *a, const void *b) {
    return strcmp(((Cliente *)a)->nome, ((Cliente *)b)->nome);
}
void listarClientes() {
    FILE *arquivo = fopen("clientes.dat", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }
    system("cls");
    printf("#####################################################\n");
    printf("##                Lista de Clientes                ##\n");
    printf("#####################################################\n");

    Cliente clientes[100];  // Suponha que haja no máximo 100 clientes

    int numClientes = 0;

    // Ler os clientes do arquivo
    while (fread(&clientes[numClientes], sizeof(Cliente), 1, arquivo) == 1 && numClientes < 100) {
        numClientes++;
    }

    fclose(arquivo);

    // Imprimir a lista
    for (int i = 0; i < numClientes; i++) {
        printf("Nome: %s | CPF: %s | Email: %s | Telefone: %s | Signo: %s\n",
               clientes[i].nome, clientes[i].cpf, clientes[i].email,
               clientes[i].telefone, clientes[i].signo);
    }
}

void apagarCliente() {
    FILE *arquivoEntrada = fopen("clientes.dat", "rb");
    FILE *arquivoSaida = fopen("clientes_temp.dat", "wb");

    if (arquivoEntrada == NULL || arquivoSaida == NULL) {
        system("cls");
        printf("Erro ao abrir arquivos para leitura/escrita.\n");
        return;
    }

    system("cls");
    char cpfApagar[15];
    printf("Digite o CPF do cliente a ser apagado: ");
    scanf("%s", cpfApagar);

    Cliente clientes[100];  // Suponha que haja no máximo 100 clientes
    int numClientes = 0;

    // Ler os clientes do arquivo
    while (fread(&clientes[numClientes], sizeof(Cliente), 1, arquivoEntrada) == 1 && numClientes < 100) {
        numClientes++;
    }

    int encontrado = 0;

    for (int i = 0; i < numClientes; i++) {
        // Se o CPF corresponder ao CPF a ser apagado, marque como encontrado
        if (strcmp(clientes[i].cpf, cpfApagar) == 0) {
            encontrado = 1;
        } else {
            // Se o CPF não corresponder, escreva o cliente no arquivo temporário
            fwrite(&clientes[i], sizeof(Cliente), 1, arquivoSaida);
        }
    }

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    if (encontrado) {
        remove("clientes.dat");
        rename("clientes_temp.dat", "clientes.dat");
        printf("Cliente removido com sucesso.\n");
        printf("Pressione enter para continuar.\n");
        getchar();
    } else {
        printf("Cliente não encontrado.\n");
        printf("Pressione enter para continuar.\n");
        getchar();
        remove("clientes_temp.dat");
    }
}

void modificarCliente() {
    FILE *arquivoEntrada = fopen("clientes.dat", "rb");
    FILE *arquivoSaida = fopen("clientes_temp.dat", "wb");

    if (arquivoEntrada == NULL || arquivoSaida == NULL) {
        printf("Erro ao abrir arquivos para leitura/escrita.\n");
        printf("Pressione enter para continuar.\n");
        getchar();
        return;
    }

    char cpfModificar[15];
    printf("Digite o CPF do cliente a ser modificado: ");
    scanf("%s", cpfModificar);

    Cliente clientes[100];  // Suponha que haja no máximo 100 clientes
    int numClientes = 0;

    // Ler os clientes do arquivo
    while (fread(&clientes[numClientes], sizeof(Cliente), 1, arquivoEntrada) == 1 && numClientes < 100) {
        numClientes++;
    }

    int encontrado = 0;

    for (int i = 0; i < numClientes; i++) {
        // Se o CPF corresponder ao CPF a ser modificado
        if (strcmp(clientes[i].cpf, cpfModificar) == 0) {
            encontrado = 1;

            // Solicitar novos dados
            printf("Novo Nome: ");
            scanf("%s", clientes[i].nome);

            printf("Novo CPF: ");
            scanf("%s", clientes[i].cpf);

            printf("Novo E-mail: ");
            scanf("%s", clientes[i].email);

            printf("Novo Telefone: ");
            scanf("%s", clientes[i].telefone);

            printf("Novo Signo: ");
            scanf("%s", clientes[i].signo);

            // Escrever o cliente modificado no arquivo temporário
            fwrite(&clientes[i], sizeof(Cliente), 1, arquivoSaida);
        } else {
            // Se o CPF não corresponder, escreva o cliente no arquivo temporário
            fwrite(&clientes[i], sizeof(Cliente), 1, arquivoSaida);
        }
    }

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    if (encontrado) {
        remove("clientes.dat");
        rename("clientes_temp.dat", "clientes.dat");
        printf("Cliente modificado com sucesso.\n");
        printf("Pressione enter para continuar.\n");
        getchar();
    } else {
        printf("Cliente não encontrado.\n");
        printf("Pressione enter para continuar.\n");
        getchar();
        remove("clientes_temp.dat");
    }
}