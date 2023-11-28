#ifndef CADASTRAR_CLIENTE_H
#define CADASTRAR_CLIENTE_H

typedef struct {
    char nome[50];
    char cpf[11];
    char email[50];
    char telefone[15];
    char signo[20];
} Cliente;

void cadastrarCliente(void);

#endif