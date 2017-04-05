#include <stdio.h>
#include <stdlib.h>
#define MAX 5


int main()
{
    int i;
   int legajo[MAX];
   float salarioAux;
   float salario[MAX];
   int edad [MAX];

   for(i=0; i<MAX; i++)
   {
    printf("Ingrese un Numero de Legajo  ");
   scanf("%d" ,&legajo[i]);

   printf("Ingrese un salario  ");
   scanf("%f" ,&salarioAux);

   printf("Ingrese una Edad  ");
   scanf("%d" ,&edad[i]);

   salario[i] = salarioAux;
   }

    printf("\n\n Legajo   Edad   Salario");

   for(i=0; i<MAX; i++)
   {
         printf(" \n %d       %d          %f \n " ,legajo[i], edad[i], salario[i] );

    }
    getch();
    return 0;
}
