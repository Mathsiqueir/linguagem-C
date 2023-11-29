#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definindo uma estrutura para armazenar os dados do atendimento
struct Atendimento {
    char nome[50];
    char cpf[15];
    int tipoAtendimento;
};

// Função para cadastrar um novo atendimento
void cadastrarAtendimento(struct Atendimento *atendimentos, int *contador) {
    fflush(stdin);
    printf("Digite o nome: ");
    gets(atendimentos[*contador].nome);
    
    printf("Digite o CPF: ");
    gets(atendimentos[*contador].cpf);

    printf("Escolha o tipo de atendimento:\n");
    printf("1 - Abertura de Conta\n");
    printf("2 - Caixa\n");
    printf("3 - Gerente Pessoa Física\n");
    printf("4 - Gerente Pessoa Jurídica\n");
    printf("Opção: ");
    scanf("%d", &atendimentos[*contador].tipoAtendimento);

    (*contador)++;
}

// Função para listar todos os atendimentos registrados
void listarAtendimentos(struct Atendimento *atendimentos, int contador) {
    printf("===============================\n");
    for (int i = 0; i < contador; i++) {
        printf("Nome: %s\n", atendimentos[i].nome);
        printf("CPF: %s\n", atendimentos[i].cpf);
        printf("Tipo Atendimento - %d - ", atendimentos[i].tipoAtendimento);

        switch (atendimentos[i].tipoAtendimento) {
            case 1:
                printf("Abertura de Conta\n");
                break;
            case 2:
                printf("Caixa\n");
                break;
            case 3:
                printf("Gerente Pessoa Física\n");
                break;
            case 4:
                printf("Gerente Pessoa Jurídica\n");
                break;
            default:
                printf("Tipo de atendimento desconhecido\n");
        }

        printf("===============================\n");
    }
}

// Função para listar atendimentos por tipo
void listarPorTipo(struct Atendimento *atendimentos, int contador, int tipo) {
    printf("===============================\n");
    for (int i = 0; i < contador; i++) {
        if (atendimentos[i].tipoAtendimento == tipo) {
            printf("Nome: %s\n", atendimentos[i].nome);
            printf("CPF: %s\n", atendimentos[i].cpf);
            printf("Tipo Atendimento - %d - ", atendimentos[i].tipoAtendimento);

            switch (atendimentos[i].tipoAtendimento) {
                case 1:
                    printf("Abertura de Conta\n");
                    break;
                case 2:
                    printf("Caixa\n");
                    break;
                case 3:
                    printf("Gerente Pessoa Física\n");
                    break;
                case 4:
                    printf("Gerente Pessoa Jurídica\n");
                    break;
                default:
                    printf("Tipo de atendimento desconhecido\n");
            }

            printf("===============================\n");
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct Atendimento atendimentos[100];  // Supondo um máximo de 100 atendimentos
    int contador = 0;
    int escolha;

    do {
        printf("Bem-vindo ao sistema de atendimento\n");
        printf("1 - Solicitar Atendimento\n");
        printf("2 - Listar Atendimentos Registrados\n");
