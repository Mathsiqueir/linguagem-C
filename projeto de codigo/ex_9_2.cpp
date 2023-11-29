/*
a função main é o que fará a linguagem C funcionar ela é a linguagem C

vamos entender agora o int argc que é um contador
e o char *argv[] é o contéudo que está dentro

int argc: Representa o número de argumentos passados para o programa 
a partir da linha de comando. argc significa 
"argument count" (contagem de argumentos).

char *argv[]: Representa um array de strings (cadeias de caracteres) 
que contém os argumentos passados para o programa. argv significa 
"argument vector" (vetor de argumentos).

*/

#include <stdio.h>

int maior(int num1,int num2);

int main(int argc, char *argv[]){
	int i;
	if (argc >1){
		printf("Foram inseridos %d argumentos ", argc);
		for(i=0; i<argc;i++){
			printf("%s\n", argv[i]);
		}
	}else{
		printf("Não foram inseridos argumentos no programa");
	}
	
	
}
