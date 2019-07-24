#include <stdio.h>
#include <stdlib.h>

typedef struct client{

  char nome[22], sexo, cpf[11];
  int dia, mes, ano;

}Cliente;

int Verifyname(Cliente *dados){

    int ncaracter = 0;

    while(dados -> nome[ncaracter] != '\0')
      	ncaracter++;

    if(ncaracter <= 22)
      	return 0;
    else
      	return 999;
}

int Verifysex(Cliente *dados){

    if ((dados -> sexo == 'f') || (dados -> sexo == 'F') || (dados -> sexo == 'm') || 
	(dados -> sexo == 'M') || (dados -> sexo == 'o') || (dados -> sexo == 'O'))
      	return 0;
    else
    	return 999;
}

int VerifyCPF(Cliente *dados){

  int ndigitos = 0;

  while(dados -> cpf[ndigitos] != '\0')
    	ndigitos++;

  if(ndigitos == 11)
  		return 0;
  else
    	return 999;
}

int VerifyData(Cliente *dados){

    if (dados -> ano >= 1890 && dados -> ano <= 2019){
		if (dados -> mes >= 1 && dados -> mes <= 12){
        	if ((dados -> dia >= 1 && dados -> dia <= 31) && (dados -> mes == 1 || dados -> mes == 3 || dados -> mes == 5 || dados -> mes == 7 || dados -> mes == 8 || dados -> mes == 10 || dados -> mes == 12))
              	return 0;
          	else if ((dados -> dia >= 1 && dados -> dia <= 30) && (dados -> mes == 4 || dados -> mes == 6 || dados -> mes == 9 || dados -> mes == 11))
              	return 0;
          	else if ((dados -> dia >= 1 && dados -> dia <= 28) && (dados -> mes == 2))
              	return 0;
          	else if (dados -> dia == 29 && dados -> mes == 2 && (dados -> ano % 400 == 0 || (dados -> ano % 4 == 0 && dados -> ano % 100 != 0)))
              	return 0;
          	else
              	return 999;
      	}
      	else
          	return 999;
  }
  else
      return 999;
}

void cadastrarCliente(int *vet){

  Cliente dados;
  int i;

  printf("Digite seu nome: \n");
  scanf("%s", &dados.nome);
  vet[1] = Verifyname(&dados);
  
  printf("Digite seu sexo: F, M ou O? \n");
  getchar();
  scanf("%s", &dados.sexo);
  vet[2] = Verifysex(&dados);
  
  printf("Digite seu CPF, sem pontos e traco: \n");
  getchar();
  scanf("%s", &dados.cpf);
  vet[3] = VerifyCPF(&dados);
  
  printf("Digite a Data de Nascimento no formato dd mm aaaa: \n");
  scanf("%i %i %i", &dados.dia, &dados.mes, &dados.ano);
  vet[4] = VerifyData(&dados);
}

int main(){

    int vet[4] = {0,0,0,0};
    int i;

    cadastrarCliente(vet);

    if (vet[1] == 999)
      	printf("Nome Invalido!\n");

    if (vet[2] == 999)
      	printf("Sexo Invalido!\n");

    if (vet[3] == 999)
      	printf("CPF Invalido!\n");

    if (vet[4]== 999)
      	printf("Data Invalida\n");

    if ((vet[0] == 0) && (vet[1] == 0) && (vet[2] == 0) && (vet[3] == 0) && (vet[4] == 0))
      	printf("\nCadastro Efetivado\n");

  return 0;
}

