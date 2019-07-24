#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define TAM_ALUNOS 5
#define TAM_NOME 50
#define NUM_DISCIPLINAS 2
#define TAM_PROFESSORES 5


typedef struct dma {

    int dia;
    int mes;
    int ano;

} data;
typedef struct dadosaluno {

    int matricula;
    char nome[TAM_NOME];
    char sexo;
    data nascimento;
    int cpf[15];

} Aluno;
typedef struct dadosprof {

    int matricula;
    char nome[TAM_NOME];
    char sexo;
    data nascimento;
    int cpf[15];

} Professor;
typedef struct dadosdisciplina{

    char nome[TAM_NOME];
    char codigo[6];
    int semestre;
    Professor profdisc;
    char alunomat[TAM_NOME];

} Disciplina;
void listardisciplina (Disciplina disciplina[], int *contadisciplina){
    

    int i;
    system ("clear");
    printf("   -Disciplinas-\n");

    for(i=0; i<*contadisciplina; i++){

        printf("[%d] nome: %s\n", i, disciplina[i].nome);
        printf("Codigo: %s\n", disciplina[i].codigo);
        printf("Semestre: %dº\n", disciplina[i].semestre);
        printf("Professor: %s\n\n", disciplina[i].profdisc.nome);
        printf ("%s", disciplina[i].alunomat);

    }
}
void listaralunoporsexo (Aluno aluno[]){
    
    int i;
    int j;
    
    for (i = 0; i < TAM_ALUNOS; i++){
        if ( aluno[i].sexo == 'M' ||  aluno[i].sexo == 'm')
            printf ("%s\n", aluno[i].nome);
    }
    
    for (i = 0; i < TAM_ALUNOS; i++){
        if ( aluno[i].sexo == 'F' ||  aluno[i].sexo == 'f')
            printf ("%s\n", aluno[i].nome);
    }
    
    printf ("\nDigite 0 para sair:  ");
    scanf ("%d", &j);
        
}

void listarprofessorporsexo (Professor professor[]){
    
    int i;
    int j;
    
    for (i = 0; i < TAM_PROFESSORES; i++){
        if ( professor[i].sexo == 'M' ||  professor[i].sexo == 'm')
            printf ("%s\n", professor[i].nome);
    }
    
    for (i = 0; i < TAM_PROFESSORES; i++){
        if ( professor[i].sexo == 'F' ||  professor[i].sexo == 'f')
            printf ("%s\n", professor[i].nome);
    }
    
    printf ("\nDigite 0 para sair:  ");
    scanf ("%d", &j);
    
}
void inseriraluno(Aluno aluno[], int *contaluno){

    system("clear");
    
    printf("informe o nome do aluno\n");
    getchar();
    scanf("%[^\n]s", &aluno[*contaluno].nome);

    printf ("Informe a matricula do aluno:\n");
    scanf ("%d", &aluno[*contaluno].matricula);

    printf ("Informe o Sexo do aluno:\n");
    scanf ("%s", &aluno[*contaluno].sexo);

    printf ("Informe os dados de nascimento do aluno no formato dd/xx/xxxx (Pressione ENTER apos informar):\n");
    scanf ("%d", &aluno[*contaluno].nascimento.dia);
    
    while ((aluno[*contaluno].nascimento.dia) > 31 || (aluno[*contaluno].nascimento.dia) < 1){

        printf ("Dia informado INVALIDO\n");
        printf ("Informe os dados de nascimento do aluno no formato dd/xx/xxxx (Pressione ENTER apos informar):\n");
        scanf ("%d", &aluno[*contaluno].nascimento.dia);

    }
    
    system("clear");
    
    printf ("Informe os dados de nascimento do aluno no formato xx/mm/xxxx (Pressione ENTER apos informar):\n");
    printf ("%d/", aluno[*contaluno].nascimento.dia);
    scanf ("%d", &aluno[*contaluno].nascimento.mes);

    while ((aluno[*contaluno].nascimento.mes) > 12 || (aluno[*contaluno].nascimento.mes) < 1){

        printf ("Mes informado INVALIDO\n");
        printf ("Informe os dados de nascimento do aluno no formato xx/mm/xxxx (Pressione ENTER apos informar):\n");
        scanf ("%d", &aluno[*contaluno].nascimento.mes);

    }
    system ("clear");
    
    printf ("Informe os dados de nascimento do aluno no formato xx/xx/aaaa (Pressione ENTER apos informar):\n");
    printf ("%d/%d/", aluno[*contaluno].nascimento.dia, aluno[*contaluno].nascimento.mes);
    scanf ("%d", &aluno[*contaluno].nascimento.ano);

    while ((aluno[*contaluno].nascimento.ano) > 2019 || (aluno[*contaluno].nascimento.ano) < 1000){

        printf ("Ano informado INVALIDO\n");
        printf ("Informe os dados de nascimento do aluno no formato xx/xx/aaaa (Pressione ENTER apos informar):\n");
        scanf ("%d", &aluno[*contaluno].nascimento.ano);

    }
    
    system("clear");

    printf ("Informe o CPF no formato XXXXXXXXXXX:\n");
    scanf ("%d", &aluno[*contaluno].cpf);
    
    printf ("Aluno Cadastrado com SUCESSO\n\n\n");
    }
void inserirprofessor(Professor professor[], int *contaprofessor){

    system("clear");

    printf("informe o nome do professor\n");

    getchar();

    scanf("%[^\n]s", &professor[*contaprofessor].nome);

    printf ("Informe a matricula do professor:\n");

    scanf ("%d", &professor[*contaprofessor].matricula);

    printf ("Informe o Sexo do professor:\n");

    scanf ("%s", &professor[*contaprofessor].sexo);

    printf ("Informe os dados de nascimento do professor no formato dd/xx/xxxx (Pressione ENTER apos informar):\n");
    scanf ("%d", &professor[*contaprofessor].nascimento.dia);
    
    while ((professor[*contaprofessor].nascimento.dia) > 31 || (professor[*contaprofessor].nascimento.dia) < 1){

        printf ("Dia informado INVALIDO\n");
        printf ("Informe os dados de nascimento do professor no formato dd/xx/xxxx (Pressione ENTER apos informar):\n");
        scanf ("%d", &professor[*contaprofessor].nascimento.dia);

    }
    
    system("clear");
    
    printf ("Informe os dados de nascimento do professor no formato xx/mm/xxxx (Pressione ENTER apos informar):\n");
    printf ("%d/", professor[*contaprofessor].nascimento.dia);
    scanf ("%d", &professor[*contaprofessor].nascimento.mes);

    while ((professor[*contaprofessor].nascimento.mes) > 12 || (professor[*contaprofessor].nascimento.mes) < 1){

        printf ("Mes informado INVALIDO\n");
        printf ("Informe os dados de nascimento do professor no formato xx/mm/xxxx (Pressione ENTER apos informar):\n");
        scanf ("%d", &professor[*contaprofessor].nascimento.mes);

    }
    system ("clear");
    
    printf ("Informe os dados de nascimento do professor no formato xx/xx/aaaa (Pressione ENTER apos informar):\n");
    printf ("%d/%d/", professor[*contaprofessor].nascimento.dia, professor[*contaprofessor].nascimento.mes);
    scanf ("%d", &professor[*contaprofessor].nascimento.ano);

    while ((professor[*contaprofessor].nascimento.ano) > 2019 || (professor[*contaprofessor].nascimento.ano) < 1000){

        printf ("Ano informado INVALIDO\n");
        printf ("Informe os dados de nascimento do professor no formato xx/xx/aaaa (Pressione ENTER apos informar):\n");
        scanf ("%d", &professor[*contaprofessor].nascimento.ano);

    }

    printf ("Informe o CPF no formato XXXXXXXXXXX:\n");

    scanf ("%d", &professor[*contaprofessor].cpf);




    system("clear");

}
void inserirdisciplina(Disciplina disciplina[], int *contadisciplina){

    system ("clear");



    printf("Informe o nome da Disciplina:\n");

    getchar();

    scanf("%[^\n]s", &disciplina[*contadisciplina].nome);



    printf("Informe o codigo da Disciplina:\n");

    scanf("%s", &disciplina[*contadisciplina].codigo);



    printf("Informe o Semestre da Discplina:\n");

    scanf("%d", &disciplina[*contadisciplina].semestre);



    printf("informe o nome do professor\n");

    getchar();

    scanf("%[^\n]s", &disciplina[*contadisciplina].profdisc.nome);

    system("clear");

}
void listaraluno (Aluno aluno[], int *contaluno){
    

    printf("   -alunos-\n");
    int i;

    for(i=0; i<*contaluno; i++)

        printf("[%d] %s\n", i, aluno[i].nome);

}

/*void listarpornome (Aluno aluno[], int *contaluno){
    
    //Com erro
    char copia[TAM_NOME];
    int i, j;
        
    for(i = 1; i < *contaluno; i++)
        for (j = 0; j < *contaluno-1; j++){

            if(strcmp (aluno[j].nome, aluno[j+1].nome) > 0){
                strcpy(copia,aluno[j].nome);
                strcpy(aluno[j].nome,aluno[j+1].nome);
                strcpy(aluno[j+1].nome,copia);
            }                               
        }      
    for(i=0;i < *contaluno;i++){ 
        
      printf("\n");   
      printf("nome = %s\n",aluno[i].nome);

    }
}
*/
void relatorio(Aluno aluno[], Professor professor[], Disciplina disciplina[], int *contadisciplina,  int *contaprofessor, int contaluno){

    system("clear");

    int i;
    int opcao;
    printf("   -Relatorios-   \n\n");
    printf("[1] Listar Alunos\n");
    printf("[2] Listar Professor\n");
    printf("[3] Listar Disciplinas\n");
    printf("[4] Listar Alunos por sexo\n");
    scanf("%d", &opcao);

        switch(opcao){

            case 1:

                listaraluno(aluno, &contaluno);

                break;

            case 2:

                printf("   -Professores-\n");

                for(i=0; i<*contaprofessor; i++)

                    printf("[%d] %s\n", i, professor[i].nome);

                break;

            case 3:

                printf("   -Disciplinas-\n");
                listardisciplina (disciplina, &*contadisciplina);

                break;
            
            case 4:
                
                printf("   -Alunos por sexo-\n");
                listaralunoporsexo(aluno);
                break;
            
            case 5:
                
                printf("   -Professores por sexo-\n");
                listarprofessorporsexo(professor);
                break;
                
        }
    }
void inserioexcluiralunodisciplina (Disciplina disciplina[], int *contadisciplina){


    system ("clear");
    int opcao;
    printf ("Inseri ou excluir AlunoDisciplina\n");
    printf ("[1] Inserir aluno\n");
    printf ("[2] Excluir aluno\n");
    scanf ("%d", &opcao);

    switch (opcao){

        case 1:

            system ("clear");
            listardisciplina(disciplina, &contadisciplina);

            printf ("Informe o numero referente a disciplina:\n");

            int d;
            scanf ("%d", &d);

            printf("Escreva o nome do aluno:\n");
            getchar();
            scanf("%[^\n]s)", &disciplina[d].alunomat);

    }

}
int main(){

    int opcao = 1;
    int contaluno = 0;
    int contaprofessor = 0;
    int contadisciplina  = 0;
    int i;
    Disciplina disciplina[NUM_DISCIPLINAS];
    Aluno aluno[TAM_ALUNOS];
    Professor professor[TAM_PROFESSORES];
    while (opcao != 0){

        system ("clear");

        printf("-----------MENU-----------\n\n");
        printf("Escolha uma opcao\n\n");
        printf("[1] Cadastrar aluno\n");
        printf("[2] Cadastrar professor\n");
        printf("[3] Cadastrar Disciplinas\n");
        printf("[4] Inserir/Excluir aluno de uma disciplina\n");
        printf("[5] Relatorios\n");
        printf("[0] Sair\n\n");

        scanf("%d", &opcao);

        switch (opcao){

            case 1:

                inseriraluno(aluno, &contaluno);
                contaluno++;

                break;

            case 2:

                inserirprofessor(professor,  &contaprofessor);
                contaprofessor++;

                break;

            case 3:

                inserirdisciplina(disciplina, &contadisciplina);
                contadisciplina++;
                break;

           case 4:

                inserioexcluiralunodisciplina (disciplina, &contadisciplina);

                break;

            case 5:

                relatorio(aluno, professor, disciplina,&contadisciplina, &contaprofessor, &contaluno);

                break;

            }
            
    }
    
    return 0;

}
