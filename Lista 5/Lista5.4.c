#include<stdio.h>


void ClassificaAluno(float nota, int falta){
if((nota>=9.5)&&(falta<=10))
    printf("APROVADO COM LOUVOR");
else{
    if((nota>=7.0)&&(falta<=10))
        printf("APROVADO");
    else{
        if((nota<7.0)&&(falta<=10)){
            printf("REPROVADO");
        }
        else{
            printf("REPROVADO POR FALTAS");
        }
    }
}


}

int main(){
int falta;
float nota;

scanf("%f", &nota);
scanf("%d", &falta);
ClassificaAluno(nota, falta);

}
