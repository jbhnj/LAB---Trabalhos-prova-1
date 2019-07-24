#include <stdio.h>
#include <stdlib.h>


void jogovelha(char tabuleiro[9]){

  	system("clear");
  	printf("   1   2   3\n");
  	printf("A  %c | %c | %c\n", tabuleiro[0], tabuleiro[1], tabuleiro[2]);
  	printf("   ----------\n");
  	printf("B  %c | %c | %c\n", tabuleiro[3], tabuleiro[4], tabuleiro[5]);
  	printf("   ----------\n");
  	printf("C  %c | %c | %c\n\n", tabuleiro[6], tabuleiro[7], tabuleiro[8]);

}

int main(){

  	char tabuleiro[9], play[3];
  	int i, posicao, contador = 0, movimento = 0, player = 1; 

    for(i = 0; i <= 8; i++){

    	tabuleiro[i] = ' ';
  	}

    do{

      	jogovelha(tabuleiro);
      	printf("vez do jogador %i:\n", player);
      	scanf("%s",&play[0], &play[1]);
      
      	if(play[0] == 'A' && play[1] == '1'){posicao = 1;}
      	if(play[0] == 'A' && play[1] == '2'){posicao = 2;}
      	if(play[0] == 'A' && play[1] == '3'){posicao = 3;}
     	if(play[0] == 'B' && play[1] == '1'){posicao = 4;}
      	if(play[0] == 'B' && play[1] == '2'){posicao = 5;}
      	if(play[0] == 'B' && play[1] == '3'){posicao = 6;}
      	if(play[0] == 'C' && play[1] == '1'){posicao = 7;}
      	if(play[0] == 'C' && play[1] == '2'){posicao = 8;}
      	if(play[0] == 'C' && play[1] == '3'){posicao = 9;}

      	if(posicao < 1 || posicao > 9){

          	posicao = 0;

      	}else 

			if(tabuleiro[posicao - 1]!= ' '){

          		posicao = 0;

       	}else{

        if(movimento %2 == 0){

          	tabuleiro[posicao - 1] = 'X';
          	player++;

        }else{

          	tabuleiro[posicao - 1] = 'O';
          	player--;

        }

        contador++;
        movimento++;

	}

      	if(tabuleiro[0] == 'O' && tabuleiro[1] == 'O' && tabuleiro[2] == 'O'){contador = 12;}
     	if(tabuleiro[3] == 'O' && tabuleiro[4] == 'O' && tabuleiro[5] == 'O'){contador = 12;}
      	if(tabuleiro[6] == 'O' && tabuleiro[7] == 'O' && tabuleiro[8] == 'O'){contador = 12;}
     	if(tabuleiro[0] == 'O' && tabuleiro[3] == 'O' && tabuleiro[6] == 'O'){contador = 12;}
      	if(tabuleiro[1] == 'O' && tabuleiro[4] == 'O' && tabuleiro[7] == 'O'){contador = 12;}
      	if(tabuleiro[2] == 'O' && tabuleiro[5] == 'O' && tabuleiro[8] == 'O'){contador = 12;}
      	if(tabuleiro[0] == 'O' && tabuleiro[4] == 'O' && tabuleiro[8] == 'O'){contador = 12;}
      	if(tabuleiro[2] == 'O' && tabuleiro[4] == 'O' && tabuleiro[6] == 'O'){contador = 12;}

      	if(tabuleiro[0] == 'X' && tabuleiro[1] == 'X' && tabuleiro[2] == 'X'){contador = 11;}
      	if(tabuleiro[3] == 'X' && tabuleiro[4] == 'X' && tabuleiro[5] == 'X'){contador = 11;}
      	if(tabuleiro[6] == 'X' && tabuleiro[7] == 'X' && tabuleiro[8] == 'X'){contador = 11;}
      	if(tabuleiro[0] == 'X' && tabuleiro[3] == 'X' && tabuleiro[6] == 'X'){contador = 11;}
      	if(tabuleiro[1] == 'X' && tabuleiro[4] == 'X' && tabuleiro[7] == 'X'){contador = 11;}
      	if(tabuleiro[2] == 'X' && tabuleiro[5] == 'X' && tabuleiro[8] == 'X'){contador = 11;}
      	if(tabuleiro[0] == 'X' && tabuleiro[4] == 'X' && tabuleiro[8] == 'X'){contador = 11;}
      	if(tabuleiro[2] == 'X' && tabuleiro[4] == 'X' && tabuleiro[6] == 'X'){contador = 11;}

	}while(contador < 9);

    	jogovelha(tabuleiro);

    	if(contador == 11){

      		printf("O Vencedor e o Jogador 1 (X)\n");

   		}else 

			if(contador == 12){

      			printf("O Vencedor e o Jogador 2 (O)\n");

   		}

   		if(contador == 9){

      		printf("Nao Houve Ganhador :(\n");

	}

	return 0;

}
