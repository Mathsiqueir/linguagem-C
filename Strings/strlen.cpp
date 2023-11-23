#include <string.h>
#include <locale.h>

#define N 20 //tamanho da string é controlado pelo define

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char s[N];
	int i;
	printf("Digite um texto:\n");
	gets(s);
	i = strlen(s);
	printf("\n tamanho do texto = %d \n", i);
	
	printf("Impressão de posição a posição: \n");
	for(i=0; i<strlen(s); i++){
		printf(" %d - %c \n",i ,s[i]);
	}
}
