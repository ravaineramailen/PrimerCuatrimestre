#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "funcion.h"
#define T 3

int main()
{

    char nombre[T][50];
    int nota1[T];
    int nota2[T];
    int nota3[T];
    float promedio[T];
    //char email[T][40];
    //char sexo;
    //int edad;
    //char legajo;
    int i;

    cargarAlumnos(nombre,nota1,nota2,nota3,promedio,T);
    mostrarAlumnos(nombre,nota1,nota2,nota3,promedio,T);

    return 0;
}

/*HACER MENU DE OPCIONES
A) CARGAR LOS DATOS (CARGA ALEATORIA)
B) MODIFICAR: SE INGRESA EL LEGAJO, LO BUSCA Y SI LO ENCUENTRA MODIFICA LA NOTA1
C)INFORMES:
1-LOS ALUMNOS CON PROMEDIO 6 O MAS.
2-EL/LOS ALUMNOS CON MAXIMO PROMEDIO.
3-LA/S ALUMNA/S CON MINIMO PROMEDIO.
4-CANTIDAD DE ALUMNOS DESAPROBADOS. (SE APRUEBA CON 6 O MAS EN EL PROMEDIO)
5-CANTIDAD DE ALUMNOS APROBADOS.
6- PORCENTAJE DE APROBADOS Y DESAPROBADOS.
7-MOSTRAR LOS ALUMNOS QUE SE LLAMAN JUAN.
8-ORDENAR LOS DATOS ALFABETICAMENTE POR NOMBRE.
9-ORDENAR LOS DATOS POR NOMBRE Y ANTE IGUALDAD DE NOMBRE POR PROMEDIO.
10-MOSTRAR LOS ALUMNOS CUYO NOMBRE COMIENCEN CON P.
11-ORDENAR ALUMNOS POR SEXO.
12-REALIZAR UN GRAFICO WUE MUESTRE:
ALUMNOS ENTRE   15-18 (INCLUSIVE)
                19-25 (INCLUSIVE)
                26 O MAS*/
