#include <stdio.h>
#include <stdlib.h>
#include "Alumno.h"

void inicializarAlumnos(eAlumno lista[],int tam, int estado)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].estado = estado;
    }
}

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

int cargarAlumnoEnListado(eAlumno listado[],int tam)
{
    int indice;
    int encontro = 0;

    indice = buscarEspacio(listado, tam);
    if(indice!=-1)
    {
        listado[indice] = cargarAlumno();
        listado[indice].estado = OCUPADO;
        encontro = 1;
    }
    return encontro;
}


void mostrarListados(eAlumno listado[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(listado[i].estado==OCUPADO)
        {
            mostrarAlumno(listado[i]);
        }
    }
}

int buscarEspacio(eAlumno listado[], int tam)
{
    int indice = -1;
    int i;
    for (i=0; i<tam; i++)
    {
        if(listado[i].estado==VACIO)
        {
            indice=i;
            break;
        }
    }
    return indice;
}

int borrarAlumno(eAlumno listado[], int tam)
{
    int legajo;
    int i;
    int encontro=0;

    printf("Ingrese el legajo: ");
    scanf("%d", legajo);
    for(i=0; i<tam;i++)
    {
        if(legajo == listado[i].legajo && listado[i].estado == OCUPADO)
        {
            listado[i].legajo = ELIMINADO; //poner BORRADO
            encontro = 1;
            break;
        }
    }

    return encontro;
}
