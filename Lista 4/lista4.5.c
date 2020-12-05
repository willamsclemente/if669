#include<stdio.h>



int main(){
int jp=0, mi=0, sjp=0, smi=0,i,n,sp[10000],sm[10000],x=0,y=0,s,j;
scanf("%d", &n);
if(n<=10000){

for(i=0; i<n; i++){
        scanf("%d", &s);
 if((s%2) ==0){
    jp++;
    sp[x]=s;
    x++;
    for(j=0; j<= jp; j++){

    if(sp[j]== s)
    break;

    if(j== jp)
    sjp=sjp+s;
    }

 }
 else{
    if((s%2)!= 0){
    mi++;
    sm[y]=s;
    y++;
    for(j=0; j<=mi; j++){

    if(sm[j]==s)
    break;

    if(j==mi)
    smi=smi+s;
    }



}
 }
}
    printf("%d", jp);
    printf("\n%d", mi);
    if(sjp>smi)
        printf("\n%d", sjp);
    else
        printf("\n%d", smi);
    return 0;




}
}
