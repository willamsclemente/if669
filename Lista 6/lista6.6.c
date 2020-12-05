#include<stdio.h>
#include<stdlib.h>


int main(){
int N, i,j,cont=1;
double aux0, aux1, media=0,npes=0,val=1;

while(1){
    scanf("%d", &N);
    if((1<=N)&&(N <= 1000000)){
    float X[N], Y[N];
    if(N==0)
    break;

    if(cont!=1)
        printf("\n");

    for(i=0; i<N; i++){
        scanf("%f%f", &X[i],&Y[i]);

    }
    for(i=0; i<N; i++){
        if((1>X[i])||(X[i]>10)||(1>Y[i])||(Y[i]>20000))
            val=0;
    }
     if(val!=0){
     for(i=0; i<N; i++){
            media=media+Y[i];
            npes=npes+X[i];
        }


    for(i=0; i<N; i++){
        Y[i]=floor(Y[i]/X[i]);
    }

    for(i=0; i<N; i++){
        for(j=i+1; j<N; j++){
            if(floor(Y[i])>floor(Y[j])){
                aux0=Y[j];
                aux1=X[j];
                Y[j]=Y[i];
                X[j]=X[i];
                Y[i]=aux0;
                X[i]=aux1;
            }
        }
    }

    for(i=0; i<N; i++){
            for(j=i+1; j<N; j++){
            if(floor(Y[i])==floor(Y[j])){
              X[i]=X[i]+X[j];
              Y[j]= 20002;
            }

            }





    }



    printf("Cidade# %d:\n", cont);
    for(i=0; i<N; i++){
            if(Y[i]!=20002)
            printf("%.0f-%.0f",X[i],Y[i]);

       if((Y[i]!=20002)&&(i!=N-1))
       printf(" ");


    }
    printf("\n");
    printf("Consumo medio: %.2f m3.", media/npes);
    printf("\n");


cont++;
media=0;
npes=0;
     }
     else
        break;
    }
    else
     break;

}













return 0;

}

