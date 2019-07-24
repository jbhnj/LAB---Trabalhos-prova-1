#include <stdio.h>
#include <stdlib.h>

typedef struct client{

  char nome[25], sexo, cpf[11];
  int dia, mes, ano;

}Cliente;

Cliente cadastrarCliente(Cliente dados){

  printf("Digite seu nome: \n");
  scanf("%s", &dados.nome);
  
  printf("Digite seu sexo: F ou M? \n");
  getchar();
  scanf("%s", &dados.sexo);
  
  printf("Digite seu CPF, sem pontos e traco: \n");
  getchar();
  scanf("%s", &dados.cpf);
  
  printf("Digite a Data de Nascimento no formato dd mm aaaa: \n");
  scanf("%i %i %i", &dados.dia, &dados.mes, &dados.ano);
 
  return dados;
}

int main(){

  Cliente dados = cadastrarCliente(dados);

  printf("Nome: %s\n", dados.nome);
  printf("Sexo: %c\n", dados.sexo);
  printf("CPF: %s\n", dados.cpf);
  printf("Data de Nascimento: %i/%i/%i", dados.dia, dados.mes, dados.ano);

  return 0;
}
