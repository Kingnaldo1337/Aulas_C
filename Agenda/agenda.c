#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "agenda.h"
#include "../Clientes/clientes.h"

void agendarConsulta(const char *cpfCliente) {
    Consulta consulta;

    // Verificar se o CPF do cliente esta cadastrado
    if (!verificarDuplicidade("cpf", cpfCliente)) {
        printf("Nenhum cliente cadastrado com o CPF fornecido.\n");
        printf("Pressione enter para continuar...");
        getchar(); // Aguarda a tecla enter
        return;
    }

    // Copiar o CPF do cliente fornecido
    strcpy(consulta.cpfCliente, cpfCliente);

    // Obter data e hora da consulta
    printf("Digite a data e hora da consulta (formato dd/mm/yyyy hh:mm): ");
    fgets(consulta.dataHora, sizeof(consulta.dataHora), stdin);
    consulta.dataHora[strcspn(consulta.dataHora, "\n")] = '\0';

    // Obter descri��o da consulta
    printf("Digite a descricao da consulta: ");
    fgets(consulta.descricao, sizeof(consulta.descricao), stdin);
    consulta.descricao[strcspn(consulta.descricao, "\n")] = '\0';

    // Abrir o arquivo para escrita (ou criacao, se nao existir)
    FILE *arquivo = fopen("consultas.dat", "ab");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        printf("Pressione enter para continuar...");
        getchar(); // Aguarda a tecla enter
        return;
    }

    // Escrever a consulta no final do arquivo
    fwrite(&consulta, sizeof(Consulta), 1, arquivo);

    fclose(arquivo);

    printf("Consulta agendada com sucesso!\n");
    printf("Pressione enter para continuar...");
    getchar(); // Aguarda a tecla enter
}

void listarConsultas() {
    FILE *arquivo = fopen("consultas.dat", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        printf("pressione enter para continuar...");
        getchar();
        return;
    }

    Consulta consulta;

    printf("\n### Lista de Consultas ###\n");

    // Ler as consultas do arquivo e imprimir
    while (fread(&consulta, sizeof(Consulta), 1, arquivo) == 1) {
        char nomeCliente[100];
        if (obterNomeCliente(consulta.cpfCliente, nomeCliente)) {
            printf("Nome Cliente: %s | Data e Hora: %s\n", nomeCliente, consulta.descricao);
        } else {
            printf("CPF Cliente: %s | Data e Hora: %s\n", consulta.cpfCliente, consulta.descricao);
        }
    }

    fclose(arquivo);
}

void apagarConsultaPorCpf(const char *cpfCliente) {
    FILE *arquivoEntrada = fopen("consultas.dat", "rb");
    FILE *arquivoSaida = fopen("consultas_temp.dat", "wb");

    if (arquivoEntrada == NULL || arquivoSaida == NULL) {
        printf("Erro ao abrir arquivos para leitura/escrita.\n");
        return;
    }

    Consulta consultaAtual;

    int encontrado = 0;

    while (fread(&consultaAtual, sizeof(Consulta), 1, arquivoEntrada) == 1) {
        if (strcmp(consultaAtual.cpfCliente, cpfCliente) == 0) {
            encontrado = 1;
        } else {
            fwrite(&consultaAtual, sizeof(Consulta), 1, arquivoSaida);
        }
    }

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    if (encontrado) {
        remove("consultas.dat");
        rename("consultas_temp.dat", "consultas.dat");
        printf("Consulta(s) removida(s) com sucesso.\n");
    } else {
        printf("Consulta(s) nao encontrada(s) para o CPF fornecido.\n");
        remove("consultas_temp.dat");
    }
}

void modificarConsultaPorCpf(const char *cpfCliente) {
    FILE *arquivoEntrada = fopen("consultas.dat", "rb");
    FILE *arquivoSaida = fopen("consultas_temp.dat", "wb");

    if (arquivoEntrada == NULL || arquivoSaida == NULL) {
        printf("Erro ao abrir arquivos para leitura/escrita.\n");
        return;
    }

    Consulta consultaAtual;

    int encontrado = 0;

    while (fread(&consultaAtual, sizeof(Consulta), 1, arquivoEntrada) == 1) {
        if (strcmp(consultaAtual.cpfCliente, cpfCliente) == 0) {
            encontrado = 1;

            // Solicitar novos dados
            printf("Nova Data e Hora (formato dd/mm/yyyy hh:mm): ");
            scanf(" %[^\n]", consultaAtual.dataHora);

            printf("Nova Descri��o: ");
            scanf(" %[^\n]", consultaAtual.descricao);

            // Escrever a consulta modificada no arquivo tempor�rio
            fwrite(&consultaAtual, sizeof(Consulta), 1, arquivoSaida);
        } else {
            // Se n�o corresponder, escrever a consulta no arquivo tempor�rio
            fwrite(&consultaAtual, sizeof(Consulta), 1, arquivoSaida);
        }
    }

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    if (encontrado) {
        remove("consultas.dat");
        rename("consultas_temp.dat", "consultas.dat");
        printf("Consulta modificada com sucesso.\n");
    } else {
        printf("Consulta n�o encontrada para o CPF fornecido.\n");
        remove("consultas_temp.dat");
    }
}