#include<stdio.h>
#define n 3
int main(){

char mat[2][2];
int cont,x,i,j,gx=0,gy=0,il=0;
scanf("%d", &cont);

for(x=0;x<cont; x++){

    for(i=0; i<n; i++)
        for(j=0;j<n; j++){
        scanf(" %c", &mat[i][j]);

        }

    fflush(stdin);
    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
        if(mat[i][j]=='X')
        gx++;

        if(gx==3)
            printf("\nX_VENCEU");
       }
       gx=0;
    }
       gx=0;

    for(j=0; j<n; j++){
       for(i=0; i<n; i++){
       if(mat[i][j]=='X')
        gx++;
    if(gx==3)
    printf("\nX_VENCEU");

    }
    gx=0;
    }

    gx=0;

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
         if(i==j){
            if(mat[i][j]=='X')
             gx++;

         if(gx==3)
            printf("\nX_VENCEU");
        }

    }
    }

    gx=0;




    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
        if(mat[i][j]=='O')
        gy++;

        if(gy==3)
            printf("\nO_VENCEU");
       }gy=0;}

       gy=0;

    for(j=0; j<n; j++){
       for(i=0; i<n; i++){
       if(mat[i][j]=='O')
        gy++;
    if(gy==3)
    printf("\nO_VENCEU");

    }
    gy=0;
    }

    gy=0;

    for(i=0; i<n; i++)
        for(j=0; j<n; j++){
         if(i==j){
            if(mat[i][j]=='O')
             gy++;

         if(gy==3)
            printf("\0_VENCEU");
        }

    }

    gy=0;





}


return 0;
}










