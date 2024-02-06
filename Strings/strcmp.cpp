#include <string.h>
#include <locale.h>
#include <stdio.h>
#define N 50
int main (){
	setlocale(LC_ALL, "Portuguese");
	
	char HardText[N];
	char senha_usr[N];
	int ok;
	
	printf("Defina sua senha:\n");
	gets(HardText);
	fflush(stdin)
	
	printf("Confirme sua senha: \n");
	gets(senha_usr);
	fflush(stdin)
	
	//condição de senha
	ok = strcmp(HardText, senha_usr);
	if(ok == 0){
		printf("Senhas Iguais!\n");
	}else{
		printf("Senhas Diferentes! \n");
	}
}

