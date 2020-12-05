#include<stdio.h>

typedef struct{
char nome[25];
float preco;
}MATERIAS;

void preencher(MATERIAS *material, int N){
int i;
for(i=0; i<N; i++){
        fflush(stdin);
    scanf("%25[^\n] %f", material[i].nome, material[i].preco);
}

}

int main(){
float D;
int N;
scanf("%f", &D);
scanf("%d", &N);
if(N<100){
    MATERIAS material[N];
    preencher(&material, N);

}




}
