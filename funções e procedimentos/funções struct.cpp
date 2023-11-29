#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprime1(int v[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", v[i]);
	}
}

void imprime2(int v[5]){
	int i;
	for(i=0; i<5; i++){
		printf("%d ", v[i]);
	}
}
 
void imprime3(int *v, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", v[i]);
	}
}

int main(){
	int vet[5] = {1,2,3,4,5};
	puts("primeiro imprime");
	imprime1(vet, 5); 
	//vet para saber quantos números serão impressos
	// 5 para dar tamanho ao vetor n
	
	puts("\nSegundo imprime");
	imprime2(vet);
	// no for colocasse o 5 no lugar do N então, não necessita de colocar no procedimento
	
	puts("\nTerceiro imprime");
	imprime3(vet, 5);
	
}
