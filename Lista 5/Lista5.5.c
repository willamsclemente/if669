#include<stdio.h>


float velkmh(float VO, float A, float T){
float res;
res= VO+(A*T);
return res;
}

int main(){
float VO,A,T,res, res1=100000;
int i;

for(i=0; i<3; i++){
    scanf("%f", &VO);
    scanf("%f", &A);
    scanf("%f", &T);
    res=velkmh(VO, A, T);
    if(res<res1)
        res1=res;
}
printf("%.1f", res1);
return 0;
}
