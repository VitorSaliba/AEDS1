#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#define TAM 2
#define bool int
#define false 0
#define true 1

typedef struct Aluno {
    char nome[50];
    char endereco[100];
    int idade;
    char cpf[12];
    float altura;
    float peso;
}Aluno;

void cadastrar(Aluno *aluno){
    printf("Entre com o nome do Aluno:\n");
    scanf(" %[^\n]s", aluno->nome);
    printf("Entre com o endereço:\n");
    scanf(" %[^\n]s", aluno->endereco);
    printf("Entre com a idade:\n");
    scanf("%d", &aluno->idade);
    printf("Entre com cpf:\n");
    scanf(" %s", aluno->cpf);
    printf("Entre com a altura:\n");
    scanf("%f", &aluno->altura);
    printf("Entre com a peso:\n");
    scanf("%f", &aluno->peso);
    fflush(stdin);
    printf("Pressione uma tecla para continuar....");
    getchar();
    system("cls");
}

void cadastrarAlunos(Aluno alunos[]){
    for(int i = 0; i < TAM; i++)
        cadastrar(&alunos[i]);
}

void mostrar(Aluno aluno){
    printf("%s ## ", aluno.nome);
    printf("%s ## ", aluno.endereco);
    printf("%d ## ", aluno.idade);
    printf("%s ## ", aluno.cpf);
    printf("%g ## ", aluno.altura);
    printf("%g ##\n",aluno.peso);
}

void mostrarAlunos(Aluno alunos[], int count){
    fflush(stdin);
    for(int i = 0; i < count; i++)
        mostrar(alunos[i]);
    fflush(stdin);
    printf("Pressione uma tecla para continuar...");
    getchar();
}

int pesquisarAlunos(Aluno alunos[], char nomeChave[], int count){
    int resp = -1;
    for(int i = 0; i < count; i++){
        if(strcmp(alunos[i].nome, nomeChave) == 0){
            resp = i;
            i = TAM;
        }
    }
    return resp;
}

int gravarRegistros(Aluno alunos[], int count){
    fflush(stdin);
    FILE *fp = fopen("basedados.txt", "w");

    for(int i = 0; i < count; i++){
        fprintf(fp, "%s;", alunos[i].nome);
        fprintf(fp, "%s;", alunos[i].endereco);
        fprintf(fp, "%d;", alunos[i].idade);
        fprintf(fp, "%s;", alunos[i].cpf);
        fprintf(fp, "%g;", alunos[i].altura);
        fprintf(fp, "%g\n", alunos[i].peso);
    }
    fclose(fp);
    fflush(stdin);
    printf("Pressione uma tecla para continuar....");
    getchar();
}

int lerRegistros(Aluno alunos[], int *count){
    FILE *fp = fopen("basedados.txt", "r");
    char linha[100];
    
    while(fgets(linha, 100, fp) != NULL){
        char *temp = strtok(linha, ";");
        strcpy(alunos[*count].nome, temp);
        temp = strtok(NULL, ";");
        strcpy(alunos[*count].endereco, temp);
        temp = strtok(NULL, ";");
        alunos[*count].idade = atoi(temp);
        temp = strtok(NULL, ";");
        strcpy(alunos[*count].cpf, temp);
        temp = strtok(NULL, ";");
        alunos[*count].altura = atof(temp);
        temp = strtok(NULL, "\n\r");
        alunos[*count].peso = atof(temp);
        *count = *count + 1;
    }
    fclose(fp);
    fflush(stdin);
    printf("Pressione uma tecla para continuar...");
    getchar();
}

int gravarAlunosbin(Aluno alunos[], int count){
    FILE *fp = fopen("basedados.txt", "w");
    /*for(int i = 0; i < count; i++)
        fwrite(&alunos[i], sizeof(Aluno), 1, fp);*/
    
    fwrite(alunos, sizeof(Aluno), count, fp);
    fclose(fp);
    fflush(stdin);
    printf("Pressione uma tecla para continuar....");
    getchar();
}

void menu(){
    system("clear || cls");
    printf("Escolha uma das opções abaixo: \n");
    printf(" 1 - Cadastro do aluno \n");
    printf(" 2 - Mostrar todos os alunos\n");
    printf(" 3 - Pesquisar pelo nome do aluno \n");
    printf(" 4 - Gravar Registros em arquivo...\n");
    printf(" 5 - Ler Registros do arquivo.\n");
    printf(" 6 - Gravar registros em arquivo binario.\n");
    printf(" 7 - Ler registros em arquivo binario.\n");
    printf(" 8 - Sair....\n");
}

int main(){
    Aluno alunos[TAM];
    char nomePesquisa[20];
    int count = 0;
    Aluno aluno;
    int opcao;
    menu();
    scanf("%d", &opcao);
    while(opcao != 8){
        switch(opcao){
            case 1:
                if(count < TAM){
                    system("cls || clear");
                    cadastrar(&aluno);
                    alunos[count] = aluno;
                    count++;
                } else {
                    printf("\nSem espaço filhao!!!\n");
                }
                break;
            case 2:
                printf("Registros em memória...\n");
                mostrarAlunos(alunos, count);
                fflush(stdin);
                getchar();
                break;
            case 3:
                printf("Entre com o nome a ser pesquisado: ");
                scanf("%s", nomePesquisa);
                int resp = pesquisarAlunos(alunos, nomePesquisa, count);
                if(resp >= 0){
                    mostrar(alunos[resp]);
                } else {
                    printf("Nome não encontrado\n");
                }
                break;
            case 4:
                printf("Registros serão gravados no arquivo...\n");
                getchar();
                gravarRegistros(alunos, count);
                break;
            case 5:
                printf("Carregando os dados da base de dados...\n");
                getchar();
                lerRegistros(alunos, &count);
                break;

            case 6:
                printf("Gravando dados da base...");
                getchar();
                gravarAlunosbin(alunos, count);
                break;
            default:
                printf("Opção inválida!!!\n");
        }
        fflush(stdin);
        menu();
        scanf("%d", &opcao);
    }
    
    
    return 0;
}