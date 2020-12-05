#include <stdio.h>

int main()

{



    int x = 1, y, ip, d, c, a;/*ip- programação ,d- Discreta, c- calculo, a-algebra*/

    char letra;

    char numero1, numero2;



    while (x!=0)

    {

        printf("Digite a inicial do nome de uma das 3 garotas, Marina, Dayane, Lhais:\n");

        fflush(stdin);

        scanf("%c", &letra);



        ip = 0;

        d = 0;
        a = 0;

        c = 0;

        y = 1;

        while(y!=0)

        {

            printf("Qual o grau de dificuldade:");

            fflush(stdin);

            scanf("%c%c", &numero1, &numero2);



            if(numero1=='x' && numero2=='y')

            {



                if(letra=='m') c++;

                if(letra=='d') a++;

                if(letra=='l') ip++;


            }

            else if(numero1=='x' && numero2=='x')

            {



                if(letra=='m') ip++;

                if(letra=='d') d++;

                if(letra=='l') d++;



            }

            else if(numero1=='y' && numero2=='y')

            {



                if(letra=='m') d++;

                if(letra=='d') ip++;

                if(letra=='l') c++;


            }

            else if(numero1=='y' && numero2=='x')

            {



                if(letra=='m') a++;

                if(letra=='d') c++;

                if(letra=='l') a++;

            }

            else

            {

                y = 0;

            }



        printf("%d\n", ip);

        printf("%d\n", c);

        printf("%d\n", a);

        printf("%d\n", d);



        }





    }

    return 0;
