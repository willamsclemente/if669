#include<stdio.h>
#include<string.h>




typedef struct{
char codigoA[30];
char nomeA[500];
int sexo;
float nota,idade;
}MATRICULA;

typedef struct{
char codigoD[25];
char nomeD[100];

}DISCIPLINA;

typedef struct{
 char CodAD[56];
 char CodA[30];
 char CodD[25];
}MatDis;

void preencherA(MATRICULA *aluno, int n);
void preencherD(DISCIPLINA *disciplina, int m);
void preencherMD(MatDis *matdis, int p);
void sexo(MATRICULA aluno[], int n);
void mediaIDADE(MATRICULA aluno[], int n);
void mediaNOTA(MATRICULA aluno[], int n);




 int main(){
 int n,m, p,i,j, auxI, cont=0,z,t,cont1=0,w,y;
 char auxS[500];
 float auxF;



 scanf("%d", &n);
 MATRICULA aluno[n];
 char mat[n][500];
 preencherA(&aluno, n);

 scanf("%d", &m);
 DISCIPLINA disciplina[m];
 preencherD(&disciplina, m);

 scanf("%d", &p);
 MatDis matdis[p];
 preencherMD(&matdis , p);

 sexo(aluno, n);
 mediaIDADE(aluno, n);
 mediaNOTA(aluno, n);


 for(i=0; i<n; i++){
    for(j=i; j<n; j++){
        if(strcmp(aluno[i].nomeA, aluno[j].nomeA)>0){
            strcpy(auxS, aluno[j].nomeA);
            strcpy(aluno[j].nomeA, aluno[i].nomeA);
            strcpy(aluno[i].nomeA, auxS);

            strcpy(auxS,aluno[j].codigoA);
            strcpy(aluno[j].codigoA, aluno[i].codigoA);
            strcpy(aluno[i].codigoA,auxS);

            auxF=aluno[j].idade;
            aluno[j].idade= aluno[i].idade;
            aluno[i].idade=auxF;

            auxI=aluno[j].sexo;
            aluno[j].sexo= aluno[i].sexo;
            aluno[i].sexo=auxI;

            auxF=aluno[j].nota;
            aluno[j].nota=aluno[i].nota;
            aluno[i].nota=auxF;



        }
    }
 }


 for(i=0; i<m; i++){
    for(j=i; j<m; j++){
        if(strcmp(disciplina[i].nomeD,disciplina[j].nomeD)>0){
            strcpy(auxS, disciplina[j].nomeD);
            strcpy(disciplina[j].nomeD,disciplina[i].nomeD);
            strcpy(disciplina[i].nomeD,auxS);

            strcpy(auxS, disciplina[j].codigoD);
            strcpy(disciplina[j].codigoD,disciplina[i].codigoD);
            strcpy(disciplina[i].codigoD,auxS);


        }

    }
 }


 for(i=0; i<m; i++){
    for(j=0; j<p; j++){
        if(strcmp(disciplina[i].codigoD,matdis[j].CodD)==0)
            cont++;
    }
    printf("\n%s", disciplina[i].nomeD);
    printf("\n%d", cont);
    for(z=0; z<p; z++){
        if(strcmp(disciplina[i].codigoD, matdis[z].CodD)==0){
            for(t=0; t<n; t++){
               if(strcmp(matdis[z].CodA,aluno[t].codigoA)==0){
                    strcpy(mat[cont1],aluno[t].nomeA);
                    cont1++;

               }
            }
        }

    }


    for(w=0; w< cont1; w++){
        for(y=w; y<cont1; y++){
            if(strcmp(mat[w], mat[y])>0){
                strcpy(auxS, mat[y]);
                strcpy(mat[y], mat[w]);
                strcpy(mat[w], auxS);


            }
        }
    }
    for(w=0; w<cont1; w++)
        printf("\n%s", mat[w]);
    cont=0;
    cont1=0;
 }




return 0;


 }

 void preencherA(MATRICULA *aluno, int n){
 int i;
 for(i=0; i<n; i++){
 scanf(" %30[^\n]", aluno[i].codigoA);
 scanf(" %500[^\n]", aluno[i].nomeA);
 scanf("%f", &aluno[i].idade);
 scanf("%d", &aluno[i].sexo);
 scanf("%f", &aluno[i].nota);


 }

 }

 void preencherD(DISCIPLINA *disciplina, int m){
 int i;
 for(i=0; i<m; i++){
 scanf(" %25[^\n]", disciplina[i].codigoD);
 scanf(" %100[^\n]", disciplina[i].nomeD);

 }
 }

 void preencherMD(MatDis *matdis, int p){
 int i;
 char *aux;

 for(i=0; i<p; i++){
 scanf(" %56[^\n]", matdis[i].CodAD);

 aux=(char*)strtok(matdis[i].CodAD, " ");
 strcpy(matdis[i].CodA, aux);


 aux=(char*)strtok(NULL, " ");
 strcpy(matdis[i].CodD, aux);




 }
}

 void sexo(MATRICULA aluno[], int n){
 int M=0, F=0,i;
 for(i=0; i<n; i++){
    if(aluno[i].sexo == 1){
        M++;
    }
    else{
        if(aluno[i].sexo == 0)
            F++;
    }
 }
 printf("%d\n%d\n", M,F);


 }

 void mediaIDADE(MATRICULA aluno[], int n){
 int i;
 float media=0;
 for(i=0; i<n; i++){
   media+= aluno[i].idade;

 }
 printf("%.2f", media/n);
 }

 void mediaNOTA(MATRICULA aluno[], int n){
    int i;
    float cont=0,mediaN;
    for(i=0; i<n; i++){
        if(aluno[i].nota >7.5){
            mediaN+= aluno[i].idade;
            cont++;
        }
    }
    printf("\n%.2f", mediaN/cont);

 }

