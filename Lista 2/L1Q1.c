#include<stdio.h>
#include<string.h>

int main()

{
    int aux, count, aux1, aux2, oper2=0,N;
    char letra, aux3[20];
    char oper[20];
    char add[]="add", del[]="del",tro[]="tro",pri[]="pri", rot[]="rot", fim[]="fim";


    printf("Qual o tamanho da palavra?");
    scanf("%d", &N);
    fflush(stdin);
    char palavra[N];
    aux3[0]=palavra[0];
    printf("\nDiga uma palavra:");
    scanf("%20[^\n]", palavra);
    fflush(stdin);


    do
    {
        printf("\nQual o operacao(add/del/tro/pri/rot/fim)?\n");
        scanf("%4[^\n]", &oper);
        fflush(stdin);

  /*Comparando o operação que será efetuada*/
        if(strcmp(oper,add)==0)
            oper2=1;
            else
              {
                 if(strcmp(oper,del)==0)
                 oper2=2;
                 else
                 {
                     if(strcmp(oper,tro)==0)
                        oper2=3;
                     else
                     {
                         if(strcmp(oper,pri)==0)
                            oper2=4;
                         else
                         {
                             if(strcmp(oper,rot)==0)
                                oper2=5;
                             else
                             {
                                 if(strcmp(oper,fim)==0)
                                    oper2=6;
                             }
                         }
                     }
                 }

              }



   /*Fazendo a operação*/

        switch(oper2)
        {
            case 1 :
                        printf("\nEm que posicao?");
                        scanf("%d", &aux);
                        fflush(stdin);
                        printf("\nQual a letra sera colocada na palavra?");
                        scanf("%c", &letra);
                        fflush(stdin);
                        palavra[aux]=letra;
                        break;

            case 2 :
                        printf("\nQual a posicao sera colocado o espaco?");
                        scanf("%d", &aux);
                        fflush(stdin);
                        palavra[aux]=' ';
                        break;

            case 3 :
                        printf("\nDiga a posicao da letra, que sera trocada:");
                        scanf("%d", &aux);
                        fflush(stdin);
                        printf("\nPara qual posicao a letra vai?");
                        scanf("%d", &aux1);
                        fflush(stdin);
                        aux2=palavra[aux];
                        palavra[aux]=palavra[aux1];
                        palavra[aux1]=aux2;
                        break;

            case 4 :
                        for(count=0; palavra[count] != '\0'; count++)
                        {
                            if(palavra[count] != ' ')
                            {
                                printf("%c", palavra[count]);
                            }
                        }
                        printf("\n");
                        break;

            case 5 :
                         for(count=N-1; count>=0; count--)
                        {
                            aux3[count]=palavra[count];
                            palavra[count]=aux3[count+1];

                        }
                        palavra[N-1]=aux3[0];

                        break;


            case 6 :
                       printf("Fim do programa!");
                       break;


            default:
                    printf("Operacao inexistente!");





       }




    }while( oper2 != 6);



return 0;
}
