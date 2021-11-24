#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>

/*Exercicio 1 - Implemente uma função recursiva que, dados dois números inteiros x e n, calcula o valor de x^n

int expo(int base, int expoente){
    int resposta;
    if(expoente == 0){
        resposta = 1;
    }else{
        resposta = x * expo(base, expoente - 1);
    }
    return resposta;
}

int main(){
    int x, n;
    printf("Digite um valor para x: \n");
    scanf("%d", &x);
    printf("Digite um valor para n: \n");
    scanf("%d", &n);
    printf("%d elevado a %d e igual a %d", x, n, expo(x, n));
    return 0;
}*/

/* Exercicio 2 - Escrever na tela a tabuada de 5 com 10 valores RECURSIVAMENTE


void tabuada(int num, int i, int N){
    if(i <= N){
        printf("%d x %d = %d\n", num, i, num * i);
        tabuada(num, i+1, N);
    }
}

int main(){
    tabuada(5, 1, 10);
    return 0;
}*/

/* Exercicio 3
int serie(int n){
    int resposta;
    if(n == 0 || n == 1 || n == 2){
        resposta = 1;
    }else{
        resposta = serie(n - 1) + serie(n - 2) + serie(n - 3);
    }
}

int main(){
    printf("O termo 10 da sequencia %d", serie(10));
}*/

/*Exercício 4 - Trocar os valores de a e b usando ponteiro
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;


}

int main(){
    int a = 10;
    int b = 20;
    printf("O valor de a(%d) e b(%d)\n", a, b);
    swap(&a, &b);
    printf("O valor de a(%d) e b(%d)\n", a, b);
    return 0;
}*/

/*Exercício 5: 
 * Crie um programa que contenha um array de inteiros 
 * contendo 5 elementos. Leia esse array do teclado e 
 * imprima o dobro de cada valor lido.

int main(void) {
int vet[5];
for (int i = 0; i < 5; i++){
printf("Digite o valor %d:\n",i+1);
scanf("%d",&vet[i]);
}
for (int i = 0; i<5; i++){
printf("%d\t",vet[i]*2);
}
return 0;
}

int main(){
    int vetor[5];
    int *aux = vetor;
    for(int i = 0; i < 5; i++){
        printf("Entre com o valor da posicao: %d\n", i);
        scanf("%d", aux);
        aux++;
    }

    aux--;
    for(int i = 0; i < 5; i++){
        printf("Posicao %d --> valor dobrado %d\n", i, (*aux)*2);
        aux--;
    }
    return 0;
}*/

/*Exercício 6 : Crie uma funçao que receba dois parametros: um array e um valor do mesmo tipo do array. 
A funçao devera preencher os elementos de array com esse valor. 
Nao utilize ındices para percorrer o array, apenas aritmética de ponteiros.

void preencheVetor(int vetor[], int valor){
    int *temp = vetor;
    for(int i = 0; i < 5; i++){
        *temp = valor;
        temp++;
    }
}

void printVetor(int vetor[]){
    int *aux = vetor;
    for(int i = 0; i < 5; i++){
    printf("%d -> %p\n ", *aux, aux);
    aux++;
    }
}

int main(){
    int vetor[5];
    int num;
    printf("Entre com o valor para o preenchimento: \n");
    scanf("%d", &num);
    preencheVetor(vetor, num);
    printVetor(vetor);
    return 0;
}*/

/*Exercício 7: Faça um algoritmo para percorrer uma string e imprimir apenas as vogais.

int main(){
    char palavra[100];
    printf("Digite a frase: \n");
    scanf("%[^\n]s", palavra);
    for(int i = 0; i < strlen(palavra); i++){
        char c = tolower(palavra[i]);
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            printf("%c\t", palavra[i]);
        }
    }
    return 0;
}*/

/*Exercício 8: Faça um algoritmo para percorrer uma string e imprimir a quantidade de caracteres maiusculos

int verificar(char frase[]){
    int count = 0;
    for(int i = 0; i < strlen(frase); i++)
        if(frase[i] >= 'A' && frase[i] <= 'Z')
            count++;
    return count;
}

int main(){
    char frase[100];
    printf("Digite a sua frase: \n");
    scanf("%[^\n]s", frase);
    int count = verificar(frase);
    printf("Quantidade de letras maiusculas: %d\n", count);
    return 0;
}*/

/*Exercício 9: Faça um algoritmo para percorrer uma string e retornar o reverso da string

char * reverso(char frase[]){
    char novaFrase[100] = " ";
    for(int i = 0; i < strlen(frase); i++)
        novaFrase[i] = frase[strlen(frase)-1-i];
    return strdup(novaFrase);
}

int main(){
    char frase[100];
    printf("Digite a frase desejada: \n");
    scanf("%[^\n]s", frase);
    printf("O reverso: %s\n", reverso(frase));
    return 0;
}*/

/*Exercício 10: Faça um algoritmo para percorrer uma string e retornar se a string é ou não palindromo
char * reverso(char frase[]){
    bool resp =  false;
    if(strcmp(frase, reverso(frase)) == 0);
        resp = true;
    return resp;
}

int main(){
    char frase[100];
    printf("Digite a frase desejada: \n");
    scanf("%[^\n]s", frase);
    reverso(frase);
    return 0;
}*/

/*Arquivos
int main(){
    char linha[50];
    FILE *fp = fopen("batata.txt", "a");
    //while (fgets(linha, 50, fp) != NULL)
    //    puts(linha);
    printf("Entre com a linha: ");
    scanf("%[^\n]s", linha);
    //fputs(linha, fp);'
    fprintf(fp, "\n\n\n\n\n%s", linha);
    fclose(fp);
    return 0;
}*/

/*Faça um programa que lê duas palavras do teclado e diz se elas são iguais ou diferentes. O programa deve dizer ainda se alguma das palavras digitadas é igual a “papagaio”.
int main(){
    char palavra1[50], palavra2[50];
    printf("Digite a primeira palavra: \n");
    scanf("%[^\n]s", palavra1);
    printf("Digite a segunda palavra: \n");
    scanf(" %[^\n]s", palavra2);

    if(strcasecmp(palavra1, palavra2)==0){
     printf("As palavras digitadas sao iguais\n");   
    }else{
        printf("As palavras digitadas sao diferentes\n");
    }
    if(strcasecmp(palavra1,"papagaio")==0){
        printf("Primeira palavra igual a papagaio\n");
    }
    if(strcasecmp(palavra2,"papagaio")==0){
        printf("Segunda palavra igual a papagaio\n");
    }
    return 0;
}*/

/*Implemente uma função que receba como parâmetro um array de números reais de tamanho N e retorne quantos numeros negativos há nesse array. Essa função deve obedecer ao prototipo: int negativos(float *vet, int N);
int Negativos(int n, float *vet){
    for(int i = 0; i < 5; i++){
        if(vet[i] < 0){
            n++;
        }
    }
    return n;
}

int main(){
    float vetor[5];
    char ordem = 248;

    for(int i = 0; i < 5; i++){
        printf("\nDigite o %d%c numero do vetor: ", i + 1, ordem);
        scanf("%f", &vetor[i]);
    }
    printf("\nO numero de negativos presentes no vetor e de %d\n\n", Negativos(0, vetor));
    return 0;
}*/

/*Matriz*/

/*Struct
typedef struct Aluno{
    char nome[50];
    char endereco[100];
    int idade;
    char cpf[12];
    float altura;
    float peso;
}Aluno;

int main(){
    Aluno a1;
    printf("Entre com o nome do Aluno: \n");
    scanf("%[^\n]s", a1.nome);
    printf("Entre com o endereco: \n");
    scanf(" %[^\n]s", a1.endereco);
    printf("Entre com a idade: \n");
    scanf("%d", &a1.idade);
    printf("Entre com o cpf: \n");
    scanf("%s", a1.cpf);
    printf("Entre com a altura: \n");
    scanf("%f", &a1.altura);
    printf("Entre com o peso: \n");
    scanf("%f", &a1.peso);

    printf("%s ## %s ## %d ## %s ## %g ## %g ##\n", a1.nome, a1.endereco, a1.idade, a1.cpf, a1.altura, a1.peso);
    return 0;
}*/

