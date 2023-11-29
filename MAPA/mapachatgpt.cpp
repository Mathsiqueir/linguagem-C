#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura para armazenar informações do atendimento
struct Atendimento {
    char nome[50];
    char cpf[15];
    int tipoAtendimento;
};

// Função para cadastrar um novo atendimento
void cadastrarAtendimento(struct Atendimento *atendimentos, int *numAtendimentos) {
    fflush(stdin);
    printf("Digite o nome: ");
    gets(atendimentos[*numAtendimentos].nome);

    fflush(stdin);
    printf("Digite o CPF: ");
    gets(atendimentos[*numAtendimentos].cpf);

    printf("Escolha o tipo de atendimento:\n");
    printf("1 - Abertura de Conta\n");
    printf("2 - Caixa\n");
    printf("3 - Gerente Pessoa Física\n");
    printf("4 - Gerente Pessoa Jurídica\n");
    scanf("%d", &atendimentos[*numAtendimentos].tipoAtendimento);

    (*numAtendimentos)++;
}

// Função para listar todos os atendimentos registrados
void listarTodosAtendimentos(struct Atendimento *atendimentos, int numAtendimentos) {
    for (int i = 0; i < numAtendimentos; i++) {
        printf("Nome: %s\n", atendimentos[i].nome);
        printf("CPF: %s\n", atendimentos[i].cpf);
        printf("Tipo Atendimento - %d - ", atendimentos[i].tipoAtendimento);

        switch (atendimentos[i].tipoAtendimento) {
            case 1:
                printf("Abertura de Conta");
                break;
            case 2:
                printf("Caixa");
                break;
            case 3:
                printf("Gerente Pessoa Física");
                break;
            case 4:
                printf("Gerente Pessoa Jurídica");
                break;
            default:
                printf("Tipo de Atendimento Desconhecido");
        }

        printf("\n===============================\n");
    }
}

// Função para listar atendimentos por tipo
void listarPorTipo(struct Atendimento *atendimentos, int numAtendimentos, int tipoEscolhido) {
    for (int i = 0; i < numAtendimentos; i++) {
        if (atendimentos[i].tipoAtendimento == tipoEscolhido) {
            printf("Nome: %s\n", atendimentos[i].nome);
            printf("CPF: %s\n", atendimentos[i].cpf);
            printf("Tipo Atendimento - %d - ", atendimentos[i].tipoAtendimento);

            switch (atendimentos[i].tipoAtendimento) {
                case 1:
                    printf("Abertura de Conta");
                    break;
                case 2:
                    printf("Caixa");
                    break;
                case 3:
                    printf("Gerente Pessoa Física");
                    break;
                case 4:
                    printf("Gerente Pessoa Jurídica");
                    break;
                default:
                    printf("Tipo de Atendimento Desconhecido");
            }

            printf("\n===============================\n");
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct Atendimento atendimentos[100];
    int numAtendimentos = 0;
    int opcao;

    do {
        printf("Bem-vindo ao sistema de atendimento\n");
        printf("1 - Solicitar Atendimento\n");
        printf("2 - Listar Atendimentos Registrados\n");
        printf("3 - Listar Atendimento por Setor\n");
        printf("4 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarAtendimento(atendimentos, &numAtendimentos);
                break;
            case 2:
                listarTodosAtendimentos(atendimentos, numAtendimentos);
                break;
            case 3:
                int tipoEscolhido;
                printf("Digite o tipo de atendimento desejado: ");
                scanf("%d", &tipoEscolhido);
                listarPorTipo(atendimentos, numAtendimentos, tipoEscolhido);
                break;
            case 4:
                printf("Saindo do sistema. Até mais!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

        system("pause");
        system("cls");

    } while (opcao != 4);

    return 0;
}

