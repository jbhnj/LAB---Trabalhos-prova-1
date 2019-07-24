#include <stdlib.h>
#include <stdio.h>

typedef struct let{
	
  char letra1, letra2, letra3;
  
}Letras;

Letras ler3Letras(Letras let){

  printf("Digite tres letras:\n");
  scanf("%c %c %c", &let.letra1, &let.letra2, &let.letra3);

  return let;
}

int main(){

  Letras let = ler3Letras(let);

  printf("%c %c %c", let.letra1, let.letra2, let.letra3);
  
  return 0;
}
