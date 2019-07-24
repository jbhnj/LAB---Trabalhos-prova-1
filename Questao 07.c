#include <stdlib.h>
#include <stdio.h>
#define TAM 15

typedef struct pala{
	
  char palavra1[TAM], palavra2[TAM], palavra3[TAM];
  
}Palavra;

Palavra ler3Palavras(Palavra pala){

  printf("digite tres palavras: \n");
  scanf("%s %s %s", &pala.palavra1, &pala.palavra2, &pala.palavra3);

  return pala;
}

int main(){

  Palavra pala = ler3Palavras(pala);

  printf("%s  %s  %s", pala.palavra1, pala.palavra2, pala.palavra3);

  return 0;
}
