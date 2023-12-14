#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "agenda.h"

void menuAgenda() {
    int opcao;

    do {
        printf("\n### Menu Agenda ###\n");
        printf("1 - Agendar Consulta\n");
        printf("2 - Listar Consultas\n");
        printf("3 - Apagar consulta\n");
        printf("4 - Modificar Consulta\n");
        printf("0 - Voltar ao Menu Principal\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                char cpfCliente[15];
                printf("Digite o CPF do cliente: ");
                scanf("%s", cpfCliente);
                agendarConsulta(cpfCliente);
                system("clear || cls");
                break;
            }
            case 2:
                listarConsultas();
                break;
            case 3: {
                char cpfCliente[15];
                printf("Digite o CPF do cliente para apagar a consulta: ");
                scanf("%s", cpfCliente);
                apagarConsultaPorCpf(cpfCliente);
                system("clear || cls");
                break;
            }
            case 4: {
                char cpfCliente[15];
                printf("Digite o CPF do cliente para modificar a consulta: ");
                scanf("%s", cpfCliente);
                modificarConsultaPorCpf(cpfCliente);
                system("clear || cls");
                break;
            }
            case 0:
                system("clear || cls");
                printf("Retornando ao Menu Principal.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);
}