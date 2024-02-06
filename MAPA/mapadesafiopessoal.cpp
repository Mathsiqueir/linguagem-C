#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct clientes{
	char nome[50];
	char cpf[15];
	int tipoAtendimento;
};
//solicitar Atendimentos
void solicitarAtendimento(struct clientes *cli, int *numAtendimentos){
	fflush(stdin);
    printf("Digite o nome: ");
    gets(cli[*numAtendimentos].nome);

    fflush(stdin);
    printf("Digite o CPF: ");
    gets(cli[*numAtendimentos].cpf);

    printf("Escolha o tipo de atendimento:\n");
    printf("1 - Abertura de Conta\n");
    printf("2 - Caixa\n");
    printf("3 - Gerente Pessoa Física\n");
    printf("4 - Gerente Pessoa Jurídica\n");
    scanf("%d", &cli[*numAtendimentos].tipoAtendimento);

    (*numAtendimentos)++;
};


// Listar Atendimentos Registrados
void listarAtendimentos(struct clientes *cli, int numAtendimentos){
	for(int i=0; i < numAtendimentos; i++) {
		printf("Nome: %s\n",cli[i].nome);
		printf("CPF: %s\n", cli[i].cpf);
		printf("Tipo Atendimento - %d - ",cli[i].tipoAtendimento);
		
		//listar atendimentos
		switch(cli[i].tipoAtendimento){
			case 1:
				printf("Abertura de conta");
				break;
			case 2:
				printf("Caixa");
				break;
			case 3:
				printf("Gerente pessoa Física");
				break;
			case 4:
				printf("Gerente pessoa Jurídica");
				break;
			default:
				printf("tipo de atendimento desconhecido");
		}
		printf("=================\n");
	}
}
//Listar Atendimentos por Setor
void listarAtendimentosSetor(struct clientes *cli, int numAtendimentos, int tipoEscolhido){
	for(int i= 0; i< numAtendimentos; i++){
		if(cli[i].tipoAtendimento == tipoEscolhido){
			printf("Nome: %s\n",cli[i].nome);
		printf("CPF: %s\n", cli[i].cpf);
		printf("Tipo Atendimento - %d - ",cli[i].tipoAtendimento);
		
		switch (cli[i].tipoAtendimento) {
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

int main(void){
	setlocale(LC_ALL, "portuguese");
	
	struct clientes cli[100];
	int numAtendimentos;
	int opcao;
	
	do{
		printf("Bem-vindo ao sistema de atendimento\n");
        printf("1 - Solicitar Atendimento\n");
        printf("2 - Listar Atendimentos Registrados\n");
        printf("3 - Listar Atendimento por Setor\n");
        printf("4 - Sair\n");
        scanf("%d", &opcao);
        
        switch(opcao){
        	case 1:
        		solicitarAtendimento(cli, &numAtendimentos);
        		break;
        	case 2:
        		listarAtendimentos(cli, numAtendimentos);
        		break;
        	case 3:
        		int tipoEscolhido;
                printf("Digite o tipo de atendimento desejado: ");
                scanf("%d", &tipoEscolhido);
                listarAtendimentosSetor(cli, numAtendimentos, tipoEscolhido);
        		break;
        	case 4:
        		printf("Saindo do Sistema. Até mais!?\n");
        		break;
        	default:
        		printf("Opção Inválida. Tente novamente!\n");
		}
		system("pause");
		system("cls");
		
	}while (opcao != 4);
		return 0;
}
