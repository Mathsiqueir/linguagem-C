/*
a fun��o main � o que far� a linguagem C funcionar ela � a linguagem C

vamos entender agora o int argc que � um contador
e o char *argv[] � o cont�udo que est� dentro

int argc: Representa o n�mero de argumentos passados para o programa 
a partir da linha de comando. argc significa 
"argument count" (contagem de argumentos).

char *argv[]: Representa um array de strings (cadeias de caracteres) 
que cont�m os argumentos passados para o programa. argv significa 
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
		printf("N�o foram inseridos argumentos no programa");
	}
	
	
}
