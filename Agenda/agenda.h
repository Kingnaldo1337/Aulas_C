#ifndef AGENDA_H
#define AGENDA_H

typedef struct {
    char cpfCliente[15];
    char dataHora[50];
    char descricao[100];
} Consulta;

void agendarConsulta(const char *cpfCliente);
void listarConsultas();
void apagarConsultaPorCpf(const char *cpfCliente);
void modificarConsultaPorCpf(const char *cpfCliente);

#endif // AGENDA_H