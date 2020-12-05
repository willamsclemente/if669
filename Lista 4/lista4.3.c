#include<stdio.h>

int main(){
char frase[400];
int i, cont=0;
char temp;
scanf("%400[^\n]", frase);


for(i=0; frase[i]!= '\0' ;i++)
cont++;
char palavra[cont];

for(i=cont; frase[i]!=' '; i--)
    palavra[i]=frase[i];



 for(i=0; i<=cont; i++){
    temp=palavra[i];
    palavra[i]=palavra[i+1];
    palavra[i+1]=temp;
 }





printf("%s", palavra);
return 0;
}
