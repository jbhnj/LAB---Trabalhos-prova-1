#include <stdio.h>
#include <stdlib.h>

float soma(float n1, float n2){

	float res;
	res = n1 + n2;
	
	return res;
}

int main(){
	
	float num1, num2, resultado;
	
	printf("Digite os dois valores a serem somados\n");
	scanf("%f %f", &num1, &num2);
	
	resultado = soma(num1, num2);
	
	printf("O resultado da soma eh: %.2f", resultado);
}

