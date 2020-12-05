#include<stdio.h>

int main(){
int n,m,x,y=0,i,j;
while(1){
   scanf("%d", &n);
   scanf("%d", &m);

   if((n==0)&&(m==0))
    break;

   char mat[n][100];
   char mat1[m][100];
   char busca[n][100];

   for(i=0; i<n; i++)
    scanf(" %100[^\n]", mat[i]);


   for(i=0; i<m; i++)
    scanf(" %100[^\n]", mat1[i]);


   for(i=0; i<n; i++){
    for(j=0; j<100; j++){
        if(mat[i][j]=='-')
            if(mat[i][j+1]=='>')
              if(mat[i][j+2]==" "){

                for( x=j+3; mat[i][x]!='\0'; x++){
                    busca[i][y]=mat[i][x];
                    printf("\n%c", busca[i][x]);
                    y++;
                }
              }


    }
    y=0;
   }

   for(i=0; i<n; i++)
    printf("\n%s", busca[i]);








}












}
