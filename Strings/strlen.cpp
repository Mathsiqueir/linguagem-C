#include <string.h>
#include <locale.h>

#define N 20 //tamanho da string � controlado pelo define

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char s[N];
	int i;
	printf("Digite um texto:\n");
	gets(s);
	i = strlen(s);
	printf("\n tamanho do texto = %d \n", i);
	
	printf("Impress�o de posi��o a posi��o: \n");
	for(i=0; i<strlen(s); i++){
		printf(" %d - %c \n",i ,s[i]);
	}
}
