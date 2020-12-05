#include<stdio.h>


int main(){
int p,i,m,n,j,t,y=0,z=0,cont=0,cont1=0;
int px[100],py[100];
 scanf("%d", &p);
 char pal[p][80];

 if((p>0)&&(p<=30)){

  for(i=0;i<p; i++)
  scanf(" %80[^\n]", pal[i]);


  scanf("%d", &m);
  scanf("%d", &n);
  char cp[m][n];
  if((m>0)&&(n<=100)){
        for(i=0; i<m; i++)
            scanf(" %100[^\n]", cp[i]);
  printf("\n");
  for(i=0; i<m; i++)
    printf("%s\n", cp[i]);
    printf("\n");

  for(t=0;t<p;t++){

  for(i=0;pal[t][i]!='\0'; i++)
    cont1++;

  for(i=0; i<m; i++){//buscando da esquerda para direita
     for(j=0;j<n;j++){
        if(cp[i][j]==pal[t][y]){
            if(j==cont){
                cont++;
                px[z]=i;
                py[z]=j;
                z++;
                if(y==cont1)
                printf("%s:\n%d%d horizontal\n", pal[t],px[0],py[0]);
                y++;
            }
        }
        else{
            y=0;
            cont=j+1;
            z=0;
        }

    }
     y=0;
     cont=0;
     z=0;
  }
  y=0;
  cont=n-1;
  z=0;



  for(i=0; i<m; i++){//buscando da direita para esquerda
     for(j=n-1;j>=0;j--){
        if(cp[i][j]==pal[t][y]){
            if(j==cont){
                cont--;
                px[z]=i;
                py[z]=j;
                z++;
                if(y==cont1)
                printf("%s:\n%d%d horizontal\n", pal[t],px[0],py[0]);
                y++;
            }
        }
        else{
            y=0;
            cont=j-1;
            z=0;
        }

    }
     y=0;
     cont=n-1;
     z=0;
  }












  }



  }




 }









}
