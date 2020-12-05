#include<stdio.h>

int main(){
int K,N,i,j,cont=0;
int menor=130;
scanf("%d %d", &N,&K);
if((1<=K)&&(K<=100)&&(K<=N)){
        if((1<=N)&&(N<=100)){

char nome[N][20];
char vet,vet1;


for(i=0; i<N; i++){
    scanf(" %20[^\n]", nome[i]);
    vet=nome[i][0];
    if(vet<menor){
        menor=vet;
        cont=i;

    }
    else{
        if(vet==menor){
         for(j=1; nome[i][j]!= '\0'|| nome[cont][j]!= '\0'; j++){
            vet=nome[i][j];
            vet1=nome[cont][j];
            if(vet<vet1){
              menor=nome[i][0];
              cont=i;
              break;
            }
         }
        }
    }


}
 printf("%s", nome[cont]);







}

}


return 0;





}
