#include <stdio.h>
#include <stdlib.h>

int fatorial (int num){
	int i, res, aux;
	aux = num;
	
	if (num < 0)
		res = -1;
	else{
		for (i=num; i > 1; i--)
			aux = aux * (i - 1);
		res = aux;
	
	return res;
	}
}

int main(){
	
	int numero, resultado;
	
	printf("Digite o numero\n");
	scanf("%d", &numero);
	
	resultado = fatorial(numero);
	
	if (resultado < 0)
		printf("Nao eh possivel calcular o fatorial");
	else
		printf("O fatorial de %d eh: %d", numero, resultado);
	
}
