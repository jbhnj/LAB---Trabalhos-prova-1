#include <stdio.h>
#include <stdlib.h>

float subtrai(float n1, float n2, float n3){

	float res;
	res = n1 - n2 - n3;
	
	return res;
}

int main(){
	
	float num1, num2, num3, resultado;
	
	printf("Digite os tres numeros a serem subtraidos\n");
	scanf("%f %f %f", &num1, &num2, &num3);
	
	resultado = subtrai(num1, num2, num3);
	
	printf("O resultado da subtracao eh: %.2f", resultado);
}

