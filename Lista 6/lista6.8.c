#include<stdio.h>


int main(){

int N,M,O,i,j,k;

scanf("%d%d%d",&N,&M,&O);

int matA[N][M],matB[M][O],matR[N][O];

for(i=0; i<N; i++)
    for(j=0; j<M; j++)
    scanf("%d", &matA[i][j]);


for(i=0; i<M; i++)
    for(j=0; j<O; j++)
    scanf("%d", &matB[i][j]);

for(i=0; i<N; i++)
  for(j=0; j<O; j++)
    matR[i][j]=0;

for(i=0; i<N; i++)
  for(j=0; j<N; j++)
    for (k=0; k<M; k++)
      matR[i][j] = matR[i][j] + (matA[i][k] * matB[k][j]);



for(i=0; i<N; i++){
  for(j=0; j<O; j++){
  printf("%d", matR[i][j]);
  if(j!=N-1)
    printf(" ");
  }
   printf("\n");

}

return 0;
}
