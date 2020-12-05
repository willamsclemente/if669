#include<stdio.h>

int vel(int T, int V){
    int c;
    c=(T*V);
    return c;
}




int main(){
int N, V, T,i, res=0,c;
scanf("%d", &N);
if((1000>=N)&&(N>=1)){
        for(i=0; i<N; i++){
            scanf("%d", &T);
            scanf("%d", &V);
            if((100>=T)&&(T>=1))
               if((120>=V)&&(V>=0)){
                c=vel(T,V);
                res=res+c;
               }

        }

        printf("%d", res);


}

return 0;





}
