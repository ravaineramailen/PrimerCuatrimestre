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
    int i;

    cargarAlumnos(nombre,nota1,nota2,nota3,promedio,T);
    mostrarAlumnos(nombre,nota1,nota2,nota3,promedio,T);

    return 0;
}
