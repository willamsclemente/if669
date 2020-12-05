#include <stdio.h>

int main()

    {

        int num = 0, resultado,x;



do{
     printf("Digite um numero:\n\n");
     scanf("%d", &resultado);



         if (resultado== 0) num = 1;

        else



             if( (resultado % 2) == 0){

        printf("\nO numero digitado e: \npar");

    }

    else {

        printf("O numero digitado e: \nimpar");

    }

            while (resultado != 0)

           {

               num = num + 1;

               resultado = resultado/ 10;

            }

       printf("\n\nQuantidade de algorismos:\n%d\n", num);



       printf("Digite 1 para continuar ou 0 para sair:\n");

    scanf("%d", &x);



   }while (x==1);

return 0;
}
