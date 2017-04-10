#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{
char nombre[10];
char nombre2[10];
printf("\nIngrese su primer nombre\t");
scanf("%s" ,nombre);
printf("\nIngrese su Segundo Nombre\t");
scanf("%s" ,nombre2);

gets(nombre);
gets(nombre2);
strlwr(nombre);
strlwr(nombre2);
nombre[0]=toupper(nombre[0]);
nombre2[0]=toupper(nombre2[0]);

printf("\nSu Nombre es: %s \t %s ", nombre ,nombre2);

    return 0;
}
