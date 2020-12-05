#include<stdio.h>
#include<stdlib.h>

void alocar(int **mat, int l, int c);
void lendo(int **mat, int l, int c);
void imprimir(int **mat, int l, int c);



int main(){
int **mat;
int l,c;
scanf("%d", &l);
scanf("%d", &c);


alocar(mat,l,c);



/*mat=(int**)malloc(l*sizeof(int*));
for(i=0; i<l; i++)
mat[i]=(int*)malloc(c*sizeof(int));*/



lendo(mat,l,c);
imprimir(mat,l,c);



}

void alocar(int **mat, int l, int c){
int i;
mat=(int**)malloc(l*sizeof(int*));
for(i=0; i<l; i++){
mat[i]=(int*)malloc(c*sizeof(int));
}

}

void lendo(int **mat, int l, int c){
int i,j;
for(i=0; i<l; i++)
    for(j=0; j<c; j++){
     scanf("%d", &*(*(mat+i)+j));

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
