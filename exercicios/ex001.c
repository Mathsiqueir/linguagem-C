#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*fa� um programa que receba quatra n�mero inteiros, 
calcule e mostre a soma desses n�meros*/


	

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, n4, soma;
	
	printf("Informe o primeiro n�mero: \n");
	scanf("%d", &n1);
	printf("Informe o segundo n�mero: \n");
	scanf("%d", &n2);
	printf("Informe o terceiro n�mero: \n");
	scanf("%d", &n3);
	printf("Informe o quarto n�mero: \n");
	scanf("%d", &n4);
	soma = (n1 + n2 + n3 + n4);
	printf("Resultado: %d", soma);
	return 0;
}
