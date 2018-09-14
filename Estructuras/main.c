#include <stdio.h>
#include <stdlib.h>
#include "Alumno.h"
#define A 3
//>>>>>>>>>>>>>>>>ESTRUCTURAS<<<<<<<<<<<<<<<<<<<<<< van en .h
/*
typedef struct //definir a las variables que guardan infromacion para un alumno-VARIABLES ESCALARES
{
    int legajo;
    char nombre[20];
    float promedio;
    char direccion[50];

}eAlumno; //VARIABLE DE LA ESTRUCTURA

void mostrarAlumno(eAlumno alumnoParametro);

eAlumno cargarAlumno();

int main()
{

    eAlumno otroAlumno;
    otroAlumno = cargarAlumno();
    mostrarAlumno(otroAlumno);

    return 0;
}

eAlumno cargarAlumno()
{
    eAlumno miAlumno;
    printf("Ingresar el legajo del alumno: ");
    scanf("%d", &miAlumno.legajo);
    printf("Ingresar el nombre del alumno: ");
    fflush(stdin);
    gets(miAlumno.nombre);
    printf("Ingresar el promedio del alumno: ");
    scanf("%f", &miAlumno.promedio);
    printf("Ingresar la direccion del alumno: ");
    fflush(stdin);
    gets(miAlumno.direccion);

    return miAlumno;
}

void mostrarAlumno(eAlumno alumnoParametro)
{
        printf("%d %s %.2f %s", alumnoParametro.legajo, alumnoParametro.nombre, alumnoParametro.promedio, alumnoParametro.direccion);
}*/

//>>>>>>>>>>>>>>>>>>>>> ARRAYS DE ESTRUCTURAS <<<<<<<<<<<<<<<<<<<<<<<<<<


int main()
{
    eAlumno listaAlumnos[A];
    cargarListado(listaAlumnos,A);
    mostrarListados(listaAlumnos,A);

    return 0;
}
