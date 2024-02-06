#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int varGlobal = 0; //aqui temos uma variavel global
int somar(){
	int v1, v2, total; /*tudo que está dentro dessa sub-rotina 
	é um variável local*/
	
	v1 = 10;
	v2 = 5;
	total = v1 + v2;
	
	return total;
}
int main(){
	setlocale(LC_ALL, "portuguse");
	printf("%d", v1);
	printf("%d", v2);
	printf("Total: %d", total);
	
}
