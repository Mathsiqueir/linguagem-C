#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 50

//typedef renomeia um identificador
struct tipo_pessoa{
	int idade;
	float peso;
	char nome[TAM];
};
typedef struct tipo_pessoa tipo_pessoa;
/*typedef facilita o acesso ao struct mudando apenas para 
tipo_pessoa, */
int main(){
	setlocale(LC_ALL, "Portuguese");
	//criando e inicializando
	tipo_pessoa pes = {0, 0.0, "teste"}; //coloque a struct na ordem
	//aqui o pes virou o var de tipo_pessoa
	printf("Início: \n");
	printf("pes.idade: %d \n", pes.idade);
	printf("pes.peso: %.2f \n", pes.peso);
	printf("pes.nome: %s \n", pes.nome);
	//atribuindo valores aos campos
	pes.idade = 10;
	pes.peso = 99.99;
	strcpy(pes.nome, "Texto");
	
	printf("\n Alterando os camppos via códigos: \n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	//Pedindo para o usuario responder a suas perguntas
	
	printf("Digite sua idade: \n");
	scanf("%d",&pes.idade);
	fflush(stdin);
	
	printf("Digite seu peso: \n");
	scanf("%f", &pes.peso);
	fflush(stdin);
	
	printf("Digite seu nome: \n");
	scanf("%30[^\n]s",&pes.nome);
	fflush(stdin);

	printf("\n Aqui abaixo seus dados estão listados: \n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
}
