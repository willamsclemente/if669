#include<stdio.h>
#include<string.h>

int main(){
int i,cont=0, cont1=0;
char palavra[200], palavra1[200];
char *pal;
scanf(" %200[^\n]", palavra);

pal=(char*)strtok(palavra, " ");



pal=(char*)strtok(NULL, " ");
strcpy(palavra1, pal);

for(i=0; palavra1[i] != '\0'; i++){
    cont1++;
}
for(i=0; palavra[i] != '\0'; i++){
        cont++;

}


for(i=0; i<cont1; i++){
if(i==0)
printf("%c", palavra1[i]);
else
printf("%c", palavra1[i]-32);
}
printf(",");
printf("%s", palavra);

}


