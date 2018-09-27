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
    printf("%d --- %s --- %.2f --- %s --- %d/%d/%d --- %d\n",
           alumnoParametro.legajo, alumnoParametro.nombre,
           alumnoParametro.promedio, alumnoParametro.direccion,
           alumnoParametro.fechaNacimiento.dia, alumnoParametro.fechaNacimiento.mes,
           alumnoParametro.fechaNacimiento.anio, alumnoParametro.idCurso);
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

    int modificarAlumno(eAlumno listado[], int tam)
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
            printf("Ingrese un nuevo promedio: ");
            scanf("%d", &listado[i].promedio);

            encontro =1;
            break;
        }
        return encontro;
    }
}


//HARDCODEO
void inicializarAlumnosConDatos(eAlumno listado[],int tam)
{
    int legajo[5]={1,2,3,4,5};
    char nombre[5][50]={"Juan", "Maria", "Pedro", "Susana", "Luis"};
    float promedio[5]={3,8,6,4,7};
    char direccion[5][50]={"aaa", "bbb", "ccc", "ddd", "eee"};
    int curso[5]={1,2,1,3,2};
    int i;

    for(i=0 ; i<5; i++)
    {
        listado[i].legajo = legajo[i];
        strcpy (listado[i].nombre, nombre[i]);
        listado[i].promedio = promedio[i];
        strcpy (listado[i].direccion, direccion[i]);
        listado[i].idCurso = curso[i];
        listado[i].estado = OCUPADO;
    }
}
