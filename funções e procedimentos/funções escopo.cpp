#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*em códigos muito grandes o int main primariamente ficará nas primeiras linhas
para facilitar sua modificação, então devemos mostrar a maquina 
que tem dados ali mas eles estão depois do main são os escopo
mais o protótipo aparecerá sempre antes do main
*/

//protótipo *se retirarmos o o prot não funcionará*
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
