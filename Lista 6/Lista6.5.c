#include<stdio.h>
#include<stdlib.h>

int main(){
int *m;
int *n;
int *res;
m=(int *)malloc(10^10000*sizeof(int));
n=(int *)malloc(10^10000*sizeof(int));
res=(int *)malloc(10^10000*sizeof(int));


scanf("%d", m);
scanf("%d", n);
res= *m+*n;

printf("%d", res);

free(m);
free(n);
free(res);

return 0;







}
