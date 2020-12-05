#include<stdio.h>


int main(){
int x=0, y=0,i;
char p[50]={0};
char n;

scanf("%s", &p);
fflush(stdin);
scanf("%c", &n);

for(i=0; p[i]!= '\0'; i++)
    x++;

for(i=0; i<=x; i++){

    if(p[i]==n){
        printf("%d\n", i);
        y++;
    }

    if((i==x)&&(y!=0))
        printf("-1\n");
}

if(y==0)
printf("-1\n");

return 0;
}
