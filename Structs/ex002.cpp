#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 1

struct tipo_pessoa{
	int idade;
	char nome[50];
	float peso;
	
};
typedef struct tipo_pessoa tipo_pessoa;
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	tipo_pessoa lista[TAM];
	int i;
	
	for(i=0; i<TAM; i++){
		printf("Insira os dados (%d): \n", i+1);
		puts("Nome: ");
		scanf("%50[^\n]s", &lista[i].nome);
		fflush(stdin);
		
		puts("Idade: ");
		scanf("%d", &lista[i].idade);
		fflush(stdin);
		
		puts("Peso: ");
		scanf("%f", &lista[i].peso);
		fflush(stdin);
		
	}
	system("cls"); //limpa os dados colocados pelo usuário	
	
	//mostrando o nome da pessoa 
	puts("Seus dados: \n");
	for(i=0; i<TAM; i++){
		printf("-----------------Pessoa %d -------------------\n", i+1);
		printf("\tNome: %s\n", lista[i].nome);
		printf("\tIdade: %d\n", lista[i].idade);
		printf("\tPeso: %.2f\n", lista[i].peso);	
	}
	printf("-----------------------------------\n");
}
