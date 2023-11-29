#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//estrutura para armazenar informa��es do cliente
struct cliente{
	char nome[30];
	char cpf[15];
	int tipoAtendimento;
}

//prot�tipos das fun��es
void cadastrarAtendimento(struct clientes, int totalClientes);
void listarAtendimentos(struct clientes, int totalClientes);
void listarPorTipo(struct clientes, int totalClientes, int tipo);

int main() {
	setLocale(LC_ALL, "Portuguese");
	//Inicializa��o de vari�veis
	struct  clientes[100]; //supondo limite de 100 clientes
	int totalClientes = 0;
	int escolha;
	
	do{
		//exibir menu
		printf("1 - Solicitar Atendimento \n");
		printf("2 - Listar Atendimentos Registrado \n");
		printf("3 - Listar Atendimentos por Setor \n");
		printf("4 - Sair! \n");
		
		//receber escolha do usu�rio
		printf("Escolha um op��o: ");
		scanf("%d", &escolha);
		
		//executar a op��o escolhida
		switch(escolha){
			case 1: //solicitar atendimento
				cadastrarAtendimento(clientes, &totalClientes);
				break;
			case 2: //listar atendimentos registrados
				listarAtendimentos(clientes, TotalClientes);
				break;
			case 3: // listar atendimentos por setor
				int tipo
				printf("Digite o tipo de atendimento (1 a 4): ");
				scanf("%d", &tipo);
				listarPorTipo(clientes, totalClientes,tipo);
				break;
			case 4: //sair
				printf("Saindo do sistema. Obrigado \n");
				break;	
		}while (escolha !=4){
			
		}
		return 0;
	}
	
	
	
