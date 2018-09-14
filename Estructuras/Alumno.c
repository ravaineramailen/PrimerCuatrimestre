#include <stdio.h>
#include <stdlib.h>
#include "Alumno.h"
eAlumno cargarAlumno()
{
    eAlumno miAlumno;

    //pedirEntero(Ingrese legajo", &miAlumno.legajo);
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
        printf("%d %s %.2f %s\n", alumnoParametro.legajo, alumnoParametro.nombre, alumnoParametro.promedio, alumnoParametro.direccion);
}

void cargarListado(eAlumno listado[],int tam)
{
    int i;
    for(i=0; i<tam; i++) //cargar vector
    {
        listado[i] = cargarAlumno();
    }
}

void mostrarListados(eAlumno listado[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        mostrarAlumno(listado[i]);
    }
}
