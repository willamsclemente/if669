#include <stdio.h>
#define max 2999
int main(){
    int n, i, j, v[max], a[max];

   while(scanf("%d",&n) == 1){
      for(i = 0; i < n; i++){
         scanf("%d",&v[i]);
         a[i] = 0;
      }
      j = n-1;
      for(i = 0; i < j; i++)
         a[abs(v[i]-v[i+1])] = 1;
      j = 1;
      for(i = 1; i < n; i++){
         if(!a[i]){
            j = 0;
            break;
         }
      }
      if(j)
         printf("Jolly\n");
      else
         printf("Not jolly\n");
   }
   return 0;
}
