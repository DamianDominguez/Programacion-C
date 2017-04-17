#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int legajo;
    char nombre [20];
    char apellido [30];
    float promedio;
}eAlumno;

int main()
{
  eAlumno unAlumno;
  unAlumno.legajo=827;
  strcpy(unAlumno.nombre, "juan");
  strcpy(unAlumno.apellido,"perez");
  unAlumno.promedio=7;


    printf("Datos del alumno\n\n");
    printf("Legajo: %d\n" ,unAlumno.legajo);
    printf("Nombre: %s %s\n" ,unAlumno.nombre, unAlumno.apellido);
    printf("Promedio: %2f\n" ,unAlumno.promedio);

    return 0;
}
