#include<stdio.h>


typedef struct{
int O,P,B;

}PROVA;

typedef struct{
int nome, OP, PP, BP;

}PAISES;

void preencher(PROVA *prova, int M, int N);
void zerando(PAISES *pais, int N);

int main(){
 int N,M,i,aux=1,j,auxO,auxP,auxB;
scanf("%d %d", &N, &M);

if((1<=N)&&(N<=100)){
    if((1<=M)&&(M<=100)){
       PAISES pais[N];
       int vet[N];
       for(i=0; i<=N; i++){
        pais[i].nome= aux;
        vet[i]=aux;
        aux++;
       }


       PROVA prova[M];
       zerando(&pais,N);
       preencher(&prova, M,N);


       for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            if(prova[i].O == pais[j].nome)
                pais[j].OP++;

            if(prova[i].P == pais[j].nome)
                 pais[j].PP++;

             if(prova[i].B== pais[j].nome)
                 pais[j].BP++;

        }
       }

       for(i=0; i<N; i++){
        for(j=i; j<N; j++){
            if(pais[i].OP< pais[j].OP){
                aux=vet[j];
                vet[j]=vet[i];
                vet[i]=aux;
                auxO=pais[j].OP;
                pais[j].OP=pais[i].OP;
                pais[i].OP=auxO;
                auxP=pais[j].PP;
                pais[j].PP=pais[i].PP;
                pais[i].PP=auxP;
                auxB=pais[j].BP;
                pais[j].BP=pais[i].BP;
                pais[i].BP=auxB;


            }
            else{
                if(pais[i].OP == pais[j].OP){
                    if(pais[i].PP< pais[j].PP){
                       aux=vet[j];
                       vet[j]=vet[i];
                       vet[i]=aux;
                       auxO=pais[j].OP;
                       pais[j].OP=pais[i].OP;
                       pais[i].OP=auxO;
                       auxP=pais[j].PP;
                       pais[j].PP=pais[i].PP;
                       pais[i].PP=auxP;
                       auxB=pais[j].BP;
                       pais[j].BP=pais[i].BP;
                       pais[i].BP=auxB;



                    }

                else{
                    if(pais[i].PP == pais[j].PP){
                        if(pais[i].BP< pais[j].BP){
                            aux=vet[j];
                            vet[j]=vet[i];
                            vet[i]=aux;
                            auxO=pais[j].OP;
                            pais[j].OP=pais[i].OP;
                            pais[i].OP=auxO;
                            auxP=pais[j].PP;
                            pais[j].PP=pais[i].PP;
                            pais[i].PP=auxP;
                            auxB=pais[j].BP;
                            pais[j].BP=pais[i].BP;
                            pais[i].BP=auxB;



                        }
                        else{
                             if(pais[i].BP == pais[j].BP){
                               if(pais[i].nome > pais[j].nome){
                                aux=vet[j];
                                vet[j]=vet[i];
                                vet[i]=aux;
                                auxO=pais[j].OP;
                                pais[j].OP=pais[i].OP;
                                pais[i].OP=auxO;
                                auxP=pais[j].PP;
                                pais[j].PP=pais[i].PP;
                                pais[i].PP=auxP;
                                auxB=pais[j].BP;
                                pais[j].BP=pais[i].BP;
                                pais[i].BP=auxB;


                               }
                             }
                        }
                    }
                }

                }
            }


        }
       }


       for(i=0; i<N; i++)
        printf("%d\n", vet[i]);





    }
}


}

void preencher(PROVA *prova, int M, int N){
int i,O,P,B;
for(i=0; i<M; i++){
    scanf("%d %d %d", &O,&P,&B);
    if((1<=O)&&(O<=N)){
        if((1<=P)&&(P<=N)){
            if((1<=B)&&(B<=N)){
                prova[i].O= O;
                prova[i].P= P;
                prova[i].B= B;
            }
        }

    }
}


}

void zerando(PAISES *pais, int N){
int i;
for(i=0; i<N; i++){
    pais[i].OP=0;
    pais[i].PP=0;
    pais[i].BP=0;
}


}


