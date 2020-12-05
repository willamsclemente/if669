#include<stdio.h>
#include<string.h>

int main(){
int N,i,cont=0,z=0,t,j,cont1=0;


    scanf("%d", &N);
    if((N>=2)&&(N<=30)){
    char cp[N+1][N+1];
    char pal[N+1][N+1];
    char busca[N+1];
    int px[N+1],py[N+1];

    for(i=0; i<N; i++)
      scanf(" %30[^\n]", cp[i]);

     printf("\n");
    for(i=0;i<N;i++)
        printf("%s\n", cp[i]);

    for(i=0;i<N;i++)
        scanf(" %[^\n]", pal[i]);

    for(t=0; t<N; t++){
    cont=0;

    for(i=0; pal[t][i]!='\0';i++)
       cont1++;

     char busca[cont1];
     char busca1[N];
     for(i=0;i<cont1;i++)
        busca[i]=pal[t][i];

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){

          if(cp[i][j]==busca[cont]){
                busca1[cont]=cp[i][j];
                cont++;
                px[z]=i;
                py[z]=j;
                z++;

            if(strcmp(busca1,busca)==0){
                printf("\n%s se encontra na posicao[%d,%d] horizontal",pal[t],px[0],py[0]);
            }

          }
          else{
          cont=0;
          z=0;
          }
        }
        cont=0;
        z=0;
    }
    cont=0;
    z=0;

    for(i=0; i<N; i++){
        for(j=N-1; j>=0; j--){
            if(cp[i][j]==pal[t][j]){
                cont++;
                px[z]=i;
                py[z]=j;
                z++;

                if(cont1==cont)
                    printf("\n%s se encontra na posicao[%d,%d] horizontal",pal[t],px[0],py[0]);
            }
            else{
                cont=0;
                z=0;
            }

        }
        cont=0;
        z=0;
    }
    cont=0;
    z=0;



    }





    }

























}
