#include<stdio.h>


typedef struct{

int codigo;
char descricao[30];
float preco;

}PRODUTO;

void preencher(PRODUTO *produto, int n){
int i;
for(i=0; i<n; i++){
scanf("%d", &produto[i].codigo);
scanf(" %[^\n]", produto[i].descricao);
scanf("%f", &produto[i].preco);

}

}

int main(){
int n,cod,qtd,i;
float total=0;
scanf("%d", &n);

PRODUTO produto[n];

preencher(&produto,n);

while(1){
  scanf("%d", &cod);
  scanf("%d", &qtd);

  if(cod == 0){
    printf("%.2f", total);
    break;
  }

  for(i=0; i<n; i++){
    if(cod == produto[i].codigo){
         if(qtd>0)
            total+=produto[i].preco*qtd;

    }
  }

}
return 0;
}
