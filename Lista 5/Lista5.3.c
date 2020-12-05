#include<stdio.h>
#include<string.h>

int soma(int num, int cont){
    int i,c=0;
    for(i=0; i<cont; i++){
    c=c+num%10;
    num=num/10;
    }
    return c;
}

int main(){
int num,c=0,i,cont;
scanf("%d", &num);
char string[num+1];

sprintf(string, "%d", num);
for(i=0; string[i]!='\0';i++)
cont++;



c= soma(num, cont);
printf("%d", c);
return 0;
}
