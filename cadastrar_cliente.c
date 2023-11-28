#include <stdio.h>
#include "cadastrar_cliente.h"

void cadastrarCliente(void) {
    Cliente novoCliente;

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
}