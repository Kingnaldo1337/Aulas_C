#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Clientes/clientes.h"
#include "relatorios.h"

void listarClientesPorSigno(const char *signoDesejado) {
    FILE *arquivo = fopen("clientes.dat", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }

    system("clear || cls");
    printf("#####################################################\n");
    printf("##       Lista de Clientes por Signo (%s)        ##\n", signoDesejado);
    printf("#####################################################\n");

    Cliente cliente;

    while (fread(&cliente, sizeof(Cliente), 1, arquivo) == 1) {
        if (strcmp(cliente.signo, signoDesejado) == 0) {
            printf("Nome: %s | CPF: %s | Email: %s | Telefone: %s | Data Nascimento: %s\n",
                   cliente.nome, cliente.cpf, cliente.email,
                   cliente.telefone, cliente.dataNascimento);
        }
    }

    fclose(arquivo);
}

void gerarRelatorioGeral() {
    FILE *arquivo = fopen("clientes.dat", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }

    system("clear || cls");
    printf("#####################################################\n");
    printf("##              Relatorio Geral de Clientes         ##\n");
    printf("#####################################################\n");

    Cliente cliente;

    while (fread(&cliente, sizeof(Cliente), 1, arquivo) == 1) {
        printf("Nome: %s | CPF: %s | Email: %s | Telefone: %s | Data Nascimento: %s | Signo: %s\n",
               cliente.nome, cliente.cpf, cliente.email,
               cliente.telefone, cliente.dataNascimento, cliente.signo);
    }

    fclose(arquivo);
}
