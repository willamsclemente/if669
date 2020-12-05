#include<stdio.h>
#include<stdlib.h>


typedef struct{
float y;
float x;
float ym;
float xm;
}C_R;

void preencher(C_R* cad, float n);
//void imprimir(C_R* cad, int n);


int main(){
int i,j;
float a=0,b=0, xm=0, ym=0, cont=0,n;
scanf("%f", &n);
if((1<=n)&&(n<=1000)){
C_R *cad;
cad=(C_R*)malloc(n*sizeof(C_R));
preencher(cad, n);
//imprimir(cad, n);

for(i=0; i<n; i++){
   for(j=0; j<=i; j++){
    xm= xm+ cad[i].x;
    ym =ym + cad[i].y;
    cont++;
    }
    xm = xm/cont;

    ym = ym/cont;




    b= b+ (cad[i].y -ym)*cad[i].x -xm/ ((cad[i].x -xm)*(cad[i].x -xm));

    xm=0;
    ym=0;
    cont=0;
}

xm=0;
ym=0;
cont=0;

for(i=0; i<n; i++){
xm= xm+cad[i].x;
ym= ym+cad[i].y;
}
xm= xm/n;
ym=ym/n;

a= ym -b*xm;

printf("\n%.2f %.2f", a, b);

}
}
void preencher(C_R* cad, float n){
int i;
for(i=0; i<n; i++){
   scanf("%f", &cad[i].y);
   scanf("%f", &cad[i].x);
}


}

/*void imprimir(C_R* cad, int n){
int i;
for(i=0; i<n; i++){
    printf("%f %f\n", cad[i].y, cad[i].x);
}

}*/
