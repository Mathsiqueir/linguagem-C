#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//iniciando uma função

float maior(float num1, float num2){
	if(num1 > num2)
		return num1;
	else
		return num2;
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x,y,m;
	printf("Insira um valor: \n");
	scanf("%f", &x);
	printf("Insira outro Valor: \n");
	scanf("%f", &y);
	m = maior(x,y); 
	/*M vira a variável 
	chama a função através do 'maior'
	o atribui x e y aos valor de num1 e num2*/
	printf("Maior: %.2f \n", m);
	
}
