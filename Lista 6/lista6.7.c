#include<stdio.h>



int main(){
int n,j,k,aux=0,i;
scanf("%d", &n);
int vet[n];
if(n <= 100000){

  for(j=0; j<n; j++)
    scanf("%d", &vet[j]);

scanf("%d", &i);

 if((0<=i)&&(i<=n)){

   for(j=n-1; j>=0; j--){
      for(k=j-1; k>=0; k--){
        aux=vet[k];
        vet[k]=vet[j];
        vet[j]=aux;
      }

   }
    for(j=0; j<n; j++){
        printf("%d", vet[j]);
        if(j!= n-1)
            printf("\n");
    }
 }




}




}
