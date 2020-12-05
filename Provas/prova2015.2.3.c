#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
char nome[50];
float altura;
}CAD;

void preencher(CAD* cadastro, int n);
void media(CAD* cadastro, int n);

int main(){
CAD *cadastro;
char palavra[50];
float altura1;
int n,i;
FILE *arq;
arq =fopen("entrada.txt", "r");
if(arq == NULL){
    printf("erro");
    return 0;
}
scanf("%d", &n);
cadastro= (CAD*)malloc(n*sizeof(CAD));
preencher(cadastro, n);
fflush(stdin);
while((fscanf(arq,"%50[^\n]\n%f\n", palavra, &altura1)) !=EOF){
   cadastro=(CAD*)realloc(cadastro, 1*sizeof(CAD));
   strcpy(cadastro[n].nome, palavra);
   cadastro[n].altura= altura1;
   n+=1;
}

media(cadastro, n);


}

void preencher(CAD* cadastro, int n){
int i;
for(i=0; i<n; i++){
   scanf(" %50[^\n]", cadastro[i].nome);
   scanf("%f", &cadastro[i].altura);

}

}

void media(CAD*cadastro, int n){
 int i;
 float med=0;
 for(i=0; i<n ; i++)
        med+=cadastro[i].altura;

 med= med/n;

 for(i=0; i<n; i++){
    if(cadastro[i].altura > med)
        printf("\n%s", cadastro[i].nome);
 }

}

