#include <stdio.h>
#include <stdlib.h>

int main(){
	int mat[2][3];
	//primeira linha
	mat[0][0] = 1;
	mat[0][1] = 2;
	mat[0][2] = 3;
	//segunda linha
	mat[1][0] = 4;	mat[1][1] = 5;
	mat[1][2] = 6;
	
	printf("Imprimindo a Primeira linha: \n");
	printf("%d %d %d \n", mat[0][0], mat[0][1], mat[0][2]);
	printf("Imprimindo a Segunda linha: \n");
	printf("%d %d %d \n", mat[1][0], mat[1][1], mat[1][2]);
	
	
}
