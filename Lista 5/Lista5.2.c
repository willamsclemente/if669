#include<stdio.h>

int main(){
int i;
char string[100];

scanf(" %100[^\n]", string);
for(i=0; string[i]!='\0';i++){
    if((171>=string[i])&&(97<=string[i])){
    if(string[i]!=" ")
    printf("%c", string[i]-32);
    }
    else{
        printf("%c", string[i]);
    }

}
printf("\n");

return 0;







}
