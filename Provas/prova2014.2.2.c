#include<stdio.h>
#include<stdlib.h>


void lendo(int **mat, int l, int c);
void imprimir(int **mat, int l, int c);
void desaloca(int **mat, int l);

int main(){
   int **mat;
   int i,l,c;
   scanf("%d", &l);
   scanf("%d", &c);

   mat= (int**)malloc(l*sizeof(int*));
   for(i=0; i<l; i++)
    mat[i]=(int*)malloc(c*sizeof(int));

   lendo(mat,l,c);
   imprimir(mat,l,c);
   desaloca(mat, l);






}

void lendo(int **mat, int l, int c){
int i,j;
for(i=0; i<l; i++){
    for(j=0; j<c; j++){
        if(j>i)
            scanf("%d", &*(*(mat+i)+j));
         else
         *(*(mat+i)+j)=0;

    }
}

}

void imprimir(int **mat, int l, int c){
int i, j;
for(i=0; i<l; i++){
    for(j=0; j<c; j++){
            printf("%d", *(*(mat+i)+j));
    }
    printf("\n");
}

}

void desaloca(int **mat, int l){
int i;
for(i=0; i<l; i++)
    free(mat[i]);

free(mat);



}
