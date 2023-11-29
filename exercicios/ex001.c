#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*faã um programa que receba quatra número inteiros, 
calcule e mostre a soma desses números*/


	

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, n4, soma;
	
	printf("Informe o primeiro número: \n");
	scanf("%d", &n1);
	printf("Informe o segundo número: \n");
	scanf("%d", &n2);
	printf("Informe o terceiro número: \n");
	scanf("%d", &n3);
	printf("Informe o quarto número: \n");
	scanf("%d", &n4);
	soma = (n1 + n2 + n3 + n4);
	printf("Resultado: %d", soma);
	return 0;
}
