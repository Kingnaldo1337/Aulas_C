#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "clientes.h"

int validarCpf(const char *cpf) {
    // Verificar se o CPF tem 11 digitos
    return (strlen(cpf) == 11);
}

int validarEmail(const char *email) {
    // Verificar se o e-mail contem um '@'
    return (strchr(email, '@') != NULL);
}

int validarTelefone(const char *telefone) {
    // Verificar se o telefone tem pelo menos 10 digitos
    return (strlen(telefone) >= 10);
}

int obterNomeCliente(const char *cpf, char *nome) {
    FILE *arquivo = fopen("clientes.dat", "rb");
    if (arquivo == NULL) {
        return 0; // Em caso de erro, considerar que nao ha cliente com esse CPF
    }

    Cliente cliente;

    while (fread(&cliente, sizeof(Cliente), 1, arquivo) == 1) {
        if (strcmp(cliente.cpf, cpf) == 0) {
            strcpy(nome, cliente.nome);
            fclose(arquivo);
            return 1; // Nome do cliente encontrado
        }
    }

    fclose(arquivo);
    return 0; // Cliente nao encontrado
}

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void limparCpf(char *cpf) {
    int j = 0;
    for (int i = 0; cpf[i] != '\0'; i++) {
        if (isdigit((unsigned char)cpf[i])) {
            cpf[j++] = cpf[i];
        }
    }
    cpf[j] = '\0';
}


int verificarDuplicidade(const char *campo, const char *valor) {
    FILE *arquivo = fopen("clientes.dat", "rb");
    if (arquivo == NULL) {
        return 0; // Em caso de erro, considerar que nao ha duplicidade
    }

    Cliente cliente;

    while (fread(&cliente, sizeof(Cliente), 1, arquivo) == 1) {
        if (strcmp(campo, "cpf") == 0 && strcmp(cliente.cpf, valor) == 0) {
            fclose(arquivo);
            return 1; // Ja existe um cliente com esse CPF
        }

        if (strcmp(campo, "email") == 0 && strcmp(cliente.email, valor) == 0) {
            fclose(arquivo);
            return 1; // Ja existe um cliente com esse e-mail
        }

        if (strcmp(campo, "telefone") == 0 && strcmp(cliente.telefone, valor) == 0) {
            fclose(arquivo);
            return 1; // Ja existe um cliente com esse telefone
        }
    }

    fclose(arquivo);
    return 0; // Nao ha duplicidade
}
void calcularSigno(const char *dataNascimento, char *signo) {

    int dia, mes;
    sscanf(dataNascimento, "%d/%d", &dia, &mes);

    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)) {
        strcpy(signo, "Aries");
    } else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)) {
        strcpy(signo, "Touro");
    } else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
        strcpy(signo, "Gemeos");
    } else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) {
        strcpy(signo, "Cancer");
    } else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) {
        strcpy(signo, "Leao");
    } else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
        strcpy(signo, "Virgem");
    } else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
        strcpy(signo, "Libra");
    } else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
        strcpy(signo, "Escorpiao");
    } else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
        strcpy(signo, "Sagitario");
    } else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)) {
        strcpy(signo, "Capricórnio");
    } else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)) {
        strcpy(signo, "Aquario");
    } else {
        strcpy(signo, "Peixes");
    }
}

void cadastrarCliente() {
    Cliente cliente;
    system("clear || cls");
    printf("#####################################################\n");
    printf("##             Cadastro de Novo Cliente             ##\n");
    printf("#####################################################\n");


    do {
        printf("Nome: ");
        fgets(cliente.nome, sizeof(cliente.nome), stdin);
        cliente.nome[strcspn(cliente.nome, "\n")] = '\0'; // Remover o caractere de nova linha

        if (strlen(cliente.nome) == 0) {
            printf("Nome invalido, digite novamente.\n");
        }
    } while (strlen(cliente.nome) == 0);

    // Validacao e verificacao de duplicidade do CPF
    do {
        printf("CPF: ");
        fgets(cliente.cpf, sizeof(cliente.cpf), stdin);
        cliente.cpf[strcspn(cliente.cpf, "\n")] = '\0';
        limparCpf(cliente.cpf);  // Limpar o CPF antes da validacao

        if (!validarCpf(cliente.cpf) || verificarDuplicidade("cpf", cliente.cpf)) {
            printf("CPF invalido ou ja cadastrado, digite novamente.\n");
        }
    } while (!validarCpf(cliente.cpf) || verificarDuplicidade("cpf", cliente.cpf));

    // Validacao e verificacao de duplicidade do e-mail
    do {
        printf("Email: ");
        fgets(cliente.email, sizeof(cliente.email), stdin);
        cliente.email[strcspn(cliente.email, "\n")] = '\0';

        if (!validarEmail(cliente.email) || verificarDuplicidade("email", cliente.email)) {
            printf("Email invalido ou ja cadastrado, digite novamente.\n");
        }
    } while (!validarEmail(cliente.email) || verificarDuplicidade("email", cliente.email));

    // Validacao e verificacao de duplicidade do telefone
    do {
        printf("Telefone: ");
        fgets(cliente.telefone, sizeof(cliente.telefone), stdin);
        cliente.telefone[strcspn(cliente.telefone, "\n")] = '\0';

        if (!validarTelefone(cliente.telefone) || verificarDuplicidade("telefone", cliente.telefone)) {
            printf("Telefone invalido ou ja cadastrado, digite novamente.\n");
        }
    } while (!validarTelefone(cliente.telefone) || verificarDuplicidade("telefone", cliente.telefone));
    do {
        printf("Data de Nascimento (DD/MM/AAAA): ");
        fgets(cliente.dataNascimento, sizeof(cliente.dataNascimento), stdin);
        cliente.dataNascimento[strcspn(cliente.dataNascimento, "\n")] = '\0';

        if (strlen(cliente.dataNascimento) != 10) {
            printf("Data de Nascimento inválida, digite novamente.\n");
        }
    } while (strlen(cliente.dataNascimento) != 10);

    // Calcular o signo com base na data de nascimento
    calcularSigno(cliente.dataNascimento, cliente.signo);

    // Abrir o arquivo para escrita (ou criacao, se n�o existir)
    FILE *arquivo = fopen("clientes.dat", "ab");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    // Escrever o cliente no final do arquivo
    fwrite(&cliente, sizeof(Cliente), 1, arquivo);

    fclose(arquivo);

    printf("Cliente cadastrado com sucesso!\n");
    getchar();  // Aguardar Enter apos a mensagem
}

void listarClientes() {
    FILE *arquivo = fopen("clientes.dat", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }
    system("clear || cls");
    printf("#####################################################\n");
    printf("##                Lista de Clientes                ##\n");
    printf("#####################################################\n");

    Cliente *cliente;  // Utilizaremos um ponteiro para Cliente

    // Calcular o tamanho do arquivo
    fseek(arquivo, 0, SEEK_END);
    long tamanhoArquivo = ftell(arquivo);
    rewind(arquivo);

    // Calcular o numero de clientes no arquivo
    int numClientes = tamanhoArquivo / sizeof(Cliente);

    // Alocar memeria para a estrutura Cliente dinamicamente
    cliente = (Cliente *)malloc(sizeof(Cliente));

    // Verificar se a alocacao foi bem-sucedida
    if (cliente == NULL) {
        printf("Erro de alocacao de memoria.\n");
        fclose(arquivo);
        return;
    }

    // Ler os clientes do arquivo e imprimir
    for (int i = 0; i < numClientes; i++) {
        fread(cliente, sizeof(Cliente), 1, arquivo);
        printf("Nome: %s | CPF: %s | Email: %s | Telefone: %s | Signo: %s\n",
               cliente->nome, cliente->cpf, cliente->email,
               cliente->telefone, cliente->signo);
    }

    // Liberar a memoria alocada
    free(cliente);

    fclose(arquivo);
    
    // Limpar o buffer de entrada
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void apagarCliente() {
    FILE *arquivoEntrada = fopen("clientes.dat", "rb");
    FILE *arquivoSaida = fopen("clientes_temp.dat", "wb");

    if (arquivoEntrada == NULL || arquivoSaida == NULL) {
        system("clear || cls");
        printf("Erro ao abrir arquivos para leitura/escrita.\n");
        return;
    }

    system("clear || cls");
    char cpfApagar[15];

    // Limpar o buffer de entrada
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite o CPF do cliente a ser apagado: ");
    fgets(cpfApagar, sizeof(cpfApagar), stdin);
    cpfApagar[strcspn(cpfApagar, "\n")] = '\0';

    limparCpf(cpfApagar);  // Limpar o CPF antes de comparar

    Cliente clienteAtual;

    int encontrado = 0;

    while (fread(&clienteAtual, sizeof(Cliente), 1, arquivoEntrada) == 1) {
        char cpfArquivoLimpo[15];
        strcpy(cpfArquivoLimpo, clienteAtual.cpf);
        limparCpf(cpfArquivoLimpo);  // Limpar o CPF antes de comparar

        if (strcmp(cpfArquivoLimpo, cpfApagar) == 0) {
            encontrado = 1;
        } else {
            fwrite(&clienteAtual, sizeof(Cliente), 1, arquivoSaida);
        }
    }

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    if (encontrado) {
        remove("clientes.dat");
        rename("clientes_temp.dat", "clientes.dat");
        printf("Cliente removido com sucesso.\n");
        printf("Pressione enter para continuar.\n");
        getchar();  // Aguardar Enter apos a mensagem
    } else {
        printf("Cliente n�o encontrado.\n");
        printf("Pressione enter para continuar.\n");
        getchar();  // Aguardar Enter apos a mensagem
        remove("clientes_temp.dat");
    }
}
void apagarTodosClientes() {
    FILE *arquivo = fopen("clientes.dat", "wb"); // Abre o arquivo para escrita, removendo o conteúdo existente
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para apagar os clientes.\n");
        return;
    }

    fclose(arquivo);
    printf("Todos os clientes foram apagados.\n");
    printf("Pressione enter para continuar.\n");
    getchar();  // Aguardar Enter após a mensagem
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

    limparCpf(cpfModificar);  // Limpar o CPF antes de comparar

    Cliente clientes[100];  // Suponha que haja no maximo 100 clientes
    int numClientes = 0;

    // Ler os clientes do arquivo
    while (fread(&clientes[numClientes], sizeof(Cliente), 1, arquivoEntrada) == 1 && numClientes < 100) {
        numClientes++;
    }

    int encontrado = 0;

    for (int i = 0; i < numClientes; i++) {
        char cpfArquivoLimpo[15];
        strcpy(cpfArquivoLimpo, clientes[i].cpf);
        limparCpf(cpfArquivoLimpo);  // Limpar o CPF antes de comparar

        if (strcmp(cpfArquivoLimpo, cpfModificar) == 0) {
            encontrado = 1;

            // Solicitar novos dados
            printf("Novo Nome: ");
            limparBuffer();  // Limpar buffer antes da leitura com fgets
            fgets(clientes[i].nome, sizeof(clientes[i].nome), stdin);
            clientes[i].nome[strcspn(clientes[i].nome, "\n")] = '\0';

            printf("Novo CPF: ");
            fgets(clientes[i].cpf, sizeof(clientes[i].cpf), stdin);
            clientes[i].cpf[strcspn(clientes[i].cpf, "\n")] = '\0';

            printf("Novo E-mail: ");
            fgets(clientes[i].email, sizeof(clientes[i].email), stdin);
            clientes[i].email[strcspn(clientes[i].email, "\n")] = '\0';

            printf("Novo Telefone: ");
            fgets(clientes[i].telefone, sizeof(clientes[i].telefone), stdin);
            clientes[i].telefone[strcspn(clientes[i].telefone, "\n")] = '\0';

            // Escrever o cliente modificado no arquivo temporario
            fwrite(&clientes[i], sizeof(Cliente), 1, arquivoSaida);
        } else {
            // Se o CPF nao corresponder, escreva o cliente no arquivo temporario
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
        printf("Cliente nao encontrado.\n");
        printf("Pressione enter para continuar.\n");
        getchar();
        remove("clientes_temp.dat");
    }
}

