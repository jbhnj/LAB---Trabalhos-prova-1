// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho

//  ----- Dados do Aluno -----
//  Nome: 
//  email: 
//  Matrícula: 
//  Semestre: 

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 20/06/2018 - 19/08/2016

// #################################################

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ANOCORRENTE 2019

/*
## função utilizada para testes  ##

 somar = somar dois valores
@objetivo
    Somar dois valores x e y e retonar o resultado da soma
@entrada
    dois inteiros x e y
@saida
    resultado da soma (x + y)
 */
int somar(int x, int y){
  int soma = 0;
  soma = x + y;
  return soma;
}

/*
## função utilizada para testes  ##

 fatorial = fatorial de um número
@objetivo
    calcular o fatorial de um número
@entrada
    um inteiro x
@saida
    fatorial de x -> x!
 */
int fatorial(int x){ //função utilizada para testes
  int fat = 1;
  return fat;
}

/*
 Q1 = validar data
@objetivo
    Validar uma data
@entrada
    uma string data. Formatos que devem ser aceitos: dd/mm/aaaa, onde dd = dia, mm = mês, e aaaa, igual ao ano. dd em mm podem ter apenas um digito, e aaaa podem ter apenas dois digitos.
@saida
    0 -> se data inválida
    1 -> se data válida
 */


int q1(char *data){
    
	int i = 0, cont, quantidade = 0, auxiliar = 0;
	int mes, dia, ano; 

  	if(data[0] >= 0 && data[1] != '/'){

    	dia = (data[0] - '0') * 10;
    	dia = dia + (data[1] - '0');
    	cont = 3;

  	}else 

		if(data[0] >= 0 && data[1] == '/'){

    		dia = data[0] - '0';
    		cont = 2;
  	}

  	if(data[cont] >= 0 && data[cont + 1] != '/'){

    	mes = (data[cont] - '0') * 10;
    	mes = mes + (data[cont + 1] - '0');
    	cont = cont + 2;

  	}else 

		if (data[cont] >= 0 && data[cont + 1] == '/'){

    		mes = data[cont] - '0';
    		cont = cont + 1;
  	}

  	for(i = cont; data[i] != '\0'; i++){

    	auxiliar++;

    if(auxiliar == 3){

      	ano = 2000;
     	ano = ano + (data[i - 1]-'0') * 10;
      	ano = ano + (data[i]-'0');

    }else 
		
		if(auxiliar == 5){

        ano = (data[i - 3] - '0') * 1000;
        ano = ano + (data[i - 2] - '0') * 100;
        ano = ano + (data[i - 1] - '0') * 10;
        ano = ano + (data[i] - '0');
    	}
  	}

    if((dia >=1 && dia <=31) && (mes >= 1 && mes <=12)){

    if((dia >=1 && dia <=29) && (mes == 2) && (ano % 4) == 0){

        return 1;

    }else 

		if((dia >=1 && dia <=28) && (mes == 2)){

        	return 1;

    }else 

		if((dia <=31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes ==8 || mes == 10 || mes == 12)){

        	return 1;

    }else 

		if((dia <=30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11)){

        	return 1;

    	}
	}

  	return 0;

	}

/*
 Q2 = diferença entre duas datas
 @objetivo
    Calcular a diferença em anos, meses e dias entre duas datas
 @entrada
    uma string datainicial, uma string datafinal. Além disso, a função tem três parâmetros qtdDias, qtdMeses e qtdAnos. Esses três parâmetros devem ser utilizados para guardar os resultados dos cálculos. Na chamada da função deve passar o valor -1 para os três
 @saida
    1 -> cálculo de diferença realizado com sucesso
    2 -> datainicial inválida
    3 -> datafinal inválida
    4 -> datainicial > datafinal
 */
int q2(char *datainicial, char *datafinal, int *qtdDias, int *qtdMeses, int *qtdAnos){
    
    //calcule os dados e armazene nas três variáveis a seguir

    int nDias = 0, nMeses = 0, nAnos = 0;
	int data1, data2, mes1, dia1, ano1, mes2, dia2, ano2;
	int i = 0, contador = 0, quantidade = 0, aux = 0, numerodias = 0;

    if (q1(datainicial) == 0)
        
		return 2;

    if (q1(datafinal) == 0)

        return 3;

    if(datainicial[0] >= 0 && datainicial[1] != '/'){

        dia1 = (datainicial[0] - '0') * 10;
        dia1 = dia1 + (datainicial[1] - '0');
        contador = 3;

	}else 

		if(datainicial[0] >= 0 && datainicial[1] == '/'){
        
			dia1 = datainicial[0] - '0';
        	contador = 2;
      	}

	if(datainicial[contador] >= 0 && datainicial[contador + 1] != '/'){

        mes1 = (datainicial[contador] - '0') * 10;
        mes1 = mes1 + (datainicial[contador + 1] - '0');
        contador = contador + 2;

	}else 

		if (datainicial[contador] >= 0 && datainicial[contador + 1] == '/'){
        
			mes1 = datainicial[contador] - '0';
        	contador = contador + 1;
      }

	for(i = contador; datainicial[i] != '\0'; i++){

		aux++;

        if(aux == 3){

          ano1 = 2000;
          ano1 = ano1 + (datainicial[i - 1]-'0') * 10;
          ano1 = ano1 + (datainicial[i]-'0');

        }else 

			if(aux == 5){

            	ano1 = (datainicial[i - 3] - '0') * 1000;
            	ano1 = ano1 + (datainicial[i - 2] - '0') * 100;
            	ano1 = ano1 + (datainicial[i - 1] - '0') * 10;
            	ano1 = ano1 + (datainicial[i] - '0');
        	}
      	}

    i = 0, contador = 0; quantidade = 0; aux = 0;

    if(datafinal[0] >= 0 && datafinal[1] != '/'){

        dia2 = (datafinal[0] - '0') * 10;
        dia2 = dia2 + (datafinal[1] - '0');
        contador = 3;

	}else 

		if(datafinal[0] >= 0 && datafinal[1] == '/'){

        	dia2 = datafinal[0] - '0';
        	contador = 2;
	}

	if(datafinal[contador] >= 0 && datafinal[contador + 1] != '/'){

        mes2 = (datafinal[contador] - '0') * 10;
        mes2 = mes2 + (datafinal[contador + 1] - '0');
        contador = contador + 2;

	}else 

		if(datafinal[contador] >= 0 && datafinal[contador + 1] == '/'){

        	mes2 = datafinal[contador] - '0';
        	contador = contador + 1;
		}

	for(i = contador; datafinal[i] != '\0'; i++){

    	aux++;

        if(aux == 3){

          ano2 = 2000;
          ano2 = ano2 + (datafinal[i - 1]-'0') * 10;
          ano2 = ano2 + (datafinal[i]-'0');

        }else 

			if(aux == 5){

            ano2 = (datafinal[i - 3] - '0') * 1000;
            ano2 = ano2 + (datafinal[i - 2] - '0') * 100;
            ano2 = ano2 + (datafinal[i - 1] - '0') * 10;
            ano2 = ano2 + (datafinal[i] - '0');

        	}
      	}

    data1 = (ano1 * 10000) + (mes1 * 100) + dia1;
    data2 = (ano2 * 10000) + (mes2 * 100) + dia2;

    if(data1 > data2){

      return 4;

    }

   	for(i = mes1 + 1; i != mes2 || ano1 != ano2; i++){

    	nMeses++;

  		if(i == 12){

  			i = 0;
			ano1++;

  		}

  		if(i == mes2 && ano1 == ano2)

  			break;

  		}

  	if((mes1 == 4 || mes1 == 6 || mes1 == 9 || mes1 == 11)){

  		numerodias = 30 - dia1;

  		nDias = numerodias + dia2;

  		while(nDias >= 30){

  			nMeses++;
			nDias -= 30;}

  		}


  	if((mes1 == 1 || mes1 == 3 || mes1 == 5 || mes1 == 7 || mes1 == 8 || mes1 == 10 || mes1 == 12)){

  		numerodias = 31 - dia1;
		nDias = numerodias + dia2;

  		while(nDias >= 31){

  			nMeses++;
			nDias -= 31;
		}
	}

  	if(mes1 == 2){

  		numerodias = 28 - dia1;
		nDias = numerodias + dia2;

  		while(nDias >= 28){

  			nMeses++;
  			nDias-=28;}

  		}


  	if(mes1 == 2 && (ano1 % 4) == 0){

  		numerodias = 29 - dia1;
  		nDias = numerodias + dia2;

  		while(nDias>=29){

  			nMeses++;
  			nDias-=29;}

  		}

  	while(nMeses >= 12){

  		nAnos++;
  		nMeses-=12;
}

    /*mantenha o código abaixo, para salvar os dados em 
    nos parâmetros da funcao
    */

    *qtdDias = nDias;
    *qtdAnos = nAnos;
    *qtdMeses = nMeses;

    //coloque o retorno correto
    return 1;

}


/*
 Q3 = encontrar caracter em texto
 @objetivo
    Pesquisar quantas vezes um determinado caracter ocorre em um texto
 @entrada
    uma string texto, um caracter c e um inteiro que informa se é uma pesquisa Case Sensitive ou não. Se isCaseSensitive = 1, a pesquisa deve considerar diferenças entre maiúsculos e minúsculos.
        Se isCaseSensitive != 1, a pesquisa não deve  considerar diferenças entre maiúsculos e minúsculos.
 @saida
    Um número n >= 0.
 */

int q3(char *texto, char c, int isCaseSensitive){
    
	int qtdOcorrencias = 0;
	int i;
    char string[251];
    
    strcpy(string, texto);
    
    if (isCaseSensitive == 1){
        
        for (i = 0; string[i] != '\0'; i++){
            
			if (string[i] == c)

                qtdOcorrencias++;

        }
    }
    
    if (isCaseSensitive == 0){
        
        for (i = 0; string[i] != '\0'; i++){
            
			if (string[i] == c)

                qtdOcorrencias++;
            
            if (string[i] == c - 32)

                qtdOcorrencias++;
        
            
            if (string[i] == c + 32)

                qtdOcorrencias++;
        }
    }
    
    return qtdOcorrencias;

}

/*
 Q4 = encontrar palavra em texto
 @objetivo
    Pesquisar todas as ocorrências de uma palavra em um texto
 @entrada
    uma string texto base (strTexto), uma string strBusca e um vetor de inteiros (posicoes) que irá guardar as posições de início e fim de cada ocorrência da palavra (strBusca) no texto base (texto).
 @saida
    Um número n >= 0 correspondente a quantidade de ocorrências encontradas.
    O vetor posicoes deve ser preenchido com cada entrada e saída correspondente. Por exemplo, se tiver uma única ocorrência, a posição 0 do vetor deve ser preenchido com o índice de início do texto, e na posição 1, deve ser preenchido com o índice de fim da ocorrencias. Se tiver duas ocorrências, a segunda ocorrência será amazenado nas posições 2 e 3, e assim consecutivamente. Suponha a string "Instituto Federal da Bahia", e palavra de busca "dera". Como há uma ocorrência da palavra de busca no texto, deve-se armazenar no vetor, da seguinte forma:
        posicoes[0] = 13;
        posicoes[1] = 16;
        Observe que o índice da posição no texto deve começar ser contado a partir de 1.
        O retorno da função, n, nesse caso seria 1;

 */

int q4(char *strTexto, char *strBusca, int posicoes[30]){
    
	int qtdOcorrencias = 0;
	char text[250], word[65];
    int text1[250], word1[65], text2[250], word2[65];
    int totaltext = 0, totalword = 0;
	int i, j, z = 0, w = 0, auxiliar;
    
	strcpy(text, strTexto);
    strcpy(word, strBusca);

    for (i = 0; text[i] != '\0'; i++)

        text1[i] = text[i];

    for (j = 0; j < i; j++){

        if (text1[j] != -61){

            totaltext++;
            text2[z] = text1[j];
            z++;
        }
    }

    for (i = 0; word[i] != '\0'; i++){

        word1[i] = word[i];
	}

    z = 0;

    for (j = 0; j < i; j++){

        if (word1[j] != -61){

            totalword++;
            word2[z] = word1[j];
            z++;
        }
    }

    z = 0;

    for (i = 0; i < totaltext; i++){

       	w = 0;
        auxiliar = totalword;
        j = 0;

        if (text2[i] == word2[j]){

            posicoes[z] = (i + 1);
            i++;
            j++;
            w++;

            if (text2[i] == word2[j])

                while (auxiliar > 1){

                    if (text2[i] == word2[j]){

                        i++;
                        j++;
                        w++;
                    }

                    auxiliar--;

                }

            if (w == totalword){

                z++;
                posicoes[z] = i;
                z++;
                qtdOcorrencias++;
            }

            else

                posicoes[z] = -1;
        }
    }

    return qtdOcorrencias;
}

/*
 Q5 = inverte número
 @objetivo
    Inverter número inteiro
 @entrada
    uma int num.
 @saida
    Número invertido
 */

int q5(int num){

	int ninv = 0, aux;

	
	while (num > 0){
		
		aux = num % 10;
		ninv = ninv * 10 + aux;
		num /= 10;
	}
	
	num = ninv;
	
    return num;
}

/*
 Q5 = ocorrência de um número em outro
 @objetivo
    Verificar quantidade de vezes da ocorrência de um número em outro
 @entrada
    Um número base (numerobase) e um número de busca (numerobusca).
 @saida
    Quantidade de vezes que número de busca ocorre em número base
 */

int q6(int numerobase, int numerobusca){

    int qtdOcorrencias = 0;
	char copynum[30], copysearch[30];
    int vetnum[30], vetsearch[30];
    int i, j, w = 0, aux1 = 0, aux2 = 0;
		
	sprintf (copynum, "%d", numerobase);
    aux1 = strlen(copynum);
    
    sprintf (copysearch, "%d", numerobusca);
    aux2 = strlen(copysearch);
    
    for (i = 0; i < aux1; i++)

        vetnum[i] = copynum[i] - '0';
    
    for (i = 0; i < aux2; i++)

        vetsearch[i] = copysearch[i] - '0';
    
    if (numerobusca < 10){
        
        for (i = 0; i < aux1; i++)
            
			if (vetnum[i] == vetsearch[0])

                qtdOcorrencias++;
    }

    else{
        
        for (i = 0; i < aux1; i++){
            
			j = 0;
            w = 0;
            
            if (vetnum[i] == vetsearch[j]){
                
                i++;
                j++;
                w++;
                
                while (vetnum[i] == vetsearch[j] && j < aux2){
                    
					j++;
                    w++;
                    
                }

                if (w == aux2)

                    qtdOcorrencias++;
                
            }
        }
    }

    return qtdOcorrencias;
}
