#include<stdio.h>


int main(){

int vet[9]={0};
int x=0,i;


for(i=0; i<=9; i++){
scanf("%d", &vet[i]);
}


for(i=0;i<=9; i++){
    if(vet[i]==vet[9])
        x++;

}

printf("O numero %d apareceu %d vezes", vet[9],x);


return 0;





}
