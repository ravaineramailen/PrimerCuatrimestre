#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Alumno.h"

#define A 5
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
    char opcion;

    inicializarAlumnos(listaAlumnos, A, VACIO);

    do
    {
        printf("1-Cargar\n2-Mostrar\n3-Borrar\n10-Salir\nELIJA OPCION: ");
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1:
            if (cargarAlumnoEnListado(listaAlumnos,A))
            {
                printf("Dato encontrado con exito");
            }
            else
            {
                printf("No existe espacio disponible");
            }
        break;
        case 2:
            mostrarListados(listaAlumnos,A);
        break;
        case 3:
            if(!borrarAlumno(listaAlumnos,A))
            {
                printf("Dato no encontrado")
            }

        }
    } while(opcion==10);



    return 0;
}
