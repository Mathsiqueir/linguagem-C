#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//STRINGS: TRABALHANDO COM DADOS EM TEXTO C
/*scanf("%s",<str> ) 
por�m dessa maneira espa�o n�o funciona*/
/* sintaxe aprimorada
		Scanf("%<tam.-1>[\^n]s", <str>)
	se vc colocar char[10] e digitar mais que isso
	ele deixa voc� acrescentar
	
 gets
 n�o tem limita��es de caracteres de string
 	gets(<string>);
 	
fgets - ultimo caractere fica reservado ao '\0'
	 	fgets(string, tam, stdin);
	 	
puts
imprimir uma string diretamente na tela
n�o admite vari�veis de outros tipos
	puts(string);
*/ 
/*int main(){
	char nome[10];
	printf("Digite algo(scanf convencional): \n");
	scanf("%s", nome);
	fflush(stdin);/*sempre que usar uma fun��o de entrada de 
	dados no teclado, para pegar o lixo de mem�ria
	
	
	printf("Resultado: %s \n \n", nome);
	
	printf("Digite algo(scanf aprimorado): \n");
	scanf("%10[^\n]s", nome);
	fflush(stdin);
	
	printf("Resultado: %s \n ", nome);
}*/

int main(){
	char s[10];
	
	printf("leitura pelo gets: \n");
	gets(s);
	fflush(stdin);
	
	puts("Resultado:");
	puts(s);
	puts("");
	
	printf("leitura do gets: \n");
	fgets(s,10,stdin);
	fflush(stdin);
	
	puts("Resultado:");
	puts(s);
}
