#include<stdio.h>

int i=0,j=0, z=0,par[5],impar[5],t,w;
int g;

int main(){
for(i=0; i<15; i++){
scanf("%d", &g);
    if(g%2==0){
        par[j]=g;
        j++;
        if(j==5){
            for(t=0; t<5;t++)
                printf("par[%d] = %d\n", t,par[t]);
                j=0;
        }
    }
    else{
        impar[z]=g;
        z++;
        if(z==5){
          for(w=0;w<5;w++)
                printf("impar[%d] = %d\n", w,impar[w]);
                z=0;

        }
    }


}
for(i=0;i<z;i++)
printf("impar[%d] = %d\n", i,impar[i]);
for(i=0;i<j;i++)
printf("par[%d] = %d\n", i,par[i]);



    return 0;



}













