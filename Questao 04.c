#include <stdio.h>
#include <stdlib.h>

int ler3Numeros(int *w){

    int vet[3], i;

	printf("Digite tres numeros inteiros:\n");
    
	for(i = 0; i < 1; i++)
      	scanf("%i", &vet[i]);

    for(i = 0; i < 3; i++)
      	return vet[i];
}

int main(){
    
	int i, w, vet[3];
    
	for(i = 0; i < 3; i++){
      	vet[i] = ler3Numeros(&w);
      	w++;
    }
    
    printf("\n");
    
	for(i = 0; i < 3; i++)
      	printf("%i\n", vet[i]);

  return 0;
}
