#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Clientes/clientes.h"
#include "relatorios.h"

void gerarRelatorio() {
    system("clear || cls");
    printf("#####################################################\n");
    printf("##                Lista de Clientes                ##\n");
    printf("#####################################################\n");

    // Cliente 1
    printf("\nNome: Reinaldo Alves\n");
    printf("CPF: 12199119416\n");
    printf("Email: reinaldo20jr@gmail.com\n");
    printf("Telefone: 84998344139\n");
    printf("Signo: Áries\n");
    printf("signo áries, seu dia será mais ou menos");

    // Separador entre clientes
    printf("\n---------------------------------------------------\n");

    // Cliente 2
    printf("\nNome: Anderson\n");
    printf("CPF: 12199119417\n");
    printf("Email: anderson@gmail.com\n");
    printf("Telefone: 84998344130\n");
    printf("Signo: Touro\n");
    printf("Signo touro, seu dia será maravilhoso\n");

    // Separador entre clientes
    printf("\n---------------------------------------------------\n");

    // Cliente 3
    printf("\nNome: boyboy\n");
    printf("CPF: 1219919418\n");
    printf("Email: boyboy@gmail.com\n");
    printf("Telefone: 84998344137\n");
    printf("Signo: Peixes\n");
    printf("Signo peixes, O seu dia será terrivel");

    printf("\nPressione enter para continuar...");
    getchar();  // Aguardar Enter após a mensagem
}

void relatorio_ordenado(){
	system("clear || cls");
    printf("#####################################################\n");
    printf("##                Lista de Clientes                ##\n");
    printf("#####################################################\n");

    // Cliente 1
    printf("\nNome: Anderson\n");
    printf("CPF: 12199119417\n");
    printf("Email: anderson@gmail.com\n"); printf("signo áries, seu dia será mais ou menos");
    printf("Telefone: 84998344130\n");
    printf("Signo: Touro\n");
    printf("Signo touro, seu dia será maravilhoso\n");

    // Separador entre clientes
    printf("\n---------------------------------------------------\n");

    // Cliente 2
    printf("\nNome: boyboy\n");
    printf("CPF: 12199119418\n");
    printf("Email: boyboy@gmail.com\n");
    printf("Telefone: 84998344137\n");
    printf("Signo: Peixes\n");
    printf("Signo peixes, O seu dia será terrivel");

    // Separador entre clientes
    printf("\n---------------------------------------------------\n");

    // Cliente 3
    printf("\nNome: Reinaldo Alves\n");
    printf("CPF: 1219919416\n");
    printf("Email: reinaldo20jr@gmail.com\n");
    printf("Telefone: 84998344139\n");
    printf("Signo: Áries\n");
    printf("signo áries, seu dia será mais ou menos");

    printf("\nPressione enter para continuar...");
    getchar();  // Aguardar Enter após a mensagem
}
