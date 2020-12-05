#include<stdio.h>
#include<stdlib.h>

int main(){
int n,i,j,t, aux;
int *mat;

scanf("%d", &n);
mat=(int *)malloc(n*sizeof(int));
if(n<=100000){
for(j=0; j<n; j++)
    scanf("%d", mat+j);

scanf("%d", &i);
if((0<=i)&&(i<=n)){


for(t=0; t<i; t++){
    for(j=0; j<i ;j++){
     aux=mat[j];
     mat[j]=mat[t];
     mat[t]=aux;

    }

}

for(j=0; j<n; j++)
    printf("%d", mat[j]);


}
}

return 0;
}
