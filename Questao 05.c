#include <stdio.h>
#include <stdlib.h>

typedef struct num{
	
	float numero1, numero2, numero3, numero4;
		
}Nume; 

Nume ler4Numeros(Nume num){
	
	printf("Digite os quatro numeros:\n");
	scanf("%f %f %f %f", &num.numero1, &num.numero2, &num.numero3, &num.numero4);
	
	return num;
}

int main(){
	
	Nume num = ler4Numeros(num);
	
	printf("%.2f %.2f %.2f %.2f", num.numero1, num.numero2, num.numero3, num.numero4);
	
	return 0;
}	



