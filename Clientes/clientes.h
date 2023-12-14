#ifndef CLIENTES_H
#define CLIENTES_H

typedef struct {
    char nome[100];
    char cpf[15];
    char email[100];
    char telefone[15];
    char signo[20];
} Cliente;

void limparBuffer();
void limparCpf(char *cpf);
int validarCpf(const char *cpf);
int validarEmail(const char *email);
int validarTelefone(const char *telefone);
int verificarDuplicidade(const char *campo, const char *valor);
void escolherSigno(char *signo);
void cadastrarCliente();
void listarClientes();
void apagarCliente();
void modificarCliente();
int obterNomeCliente(const char *cpf, char *nome);

#endif