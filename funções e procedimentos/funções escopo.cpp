#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*em c�digos muito grandes o int main primariamente ficar� nas primeiras linhas
para facilitar sua modifica��o, ent�o devemos mostrar a maquina 
que tem dados ali mas eles est�o depois do main s�o os escopo
mais o prot�tipo aparecer� sempre antes do main
*/

//prot�tipo *se retirarmos o o prot n�o funcionar�*
float maior(float num1, float num2);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x,y,m;
	printf("Insira um valor: \n");
	scanf("%f", &x);
	printf("Insira outro Valor: \n");
	scanf("%f", &y);
	
	m = maior(x,y); 
	
	printf("Maior: %.2f \n", m);
	
}
//como ela funciona
float maior(float num1, float num2){
	if(num1 > num2)
		return num1;
	else
		return num2;
}
