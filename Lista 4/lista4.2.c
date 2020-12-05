#include<stdio.h>


int main(){
int i;
int vet[100];

for(i=0; i<=100; i++)
scanf("%d", &vet[i]);


for(i=0; i<=99; i++){
    if(vet[i]==vet[100])
        printf("%d\n", i);
}


return 0;






}
