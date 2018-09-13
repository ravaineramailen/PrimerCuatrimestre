#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "funcion.h"

float calcularPromedio (int nota1, int nota2, int nota3)
{
    float promedio;
    promedio = (float)(nota1 + nota2 + nota3) / 3;
    return promedio;
}

int cargarAlumnos(char nombre[][50],int nota1[],int nota2[],int nota3[],float promedio[],int tam)
{
    int i;
    for(i=0 ; i<tam ; i++)
    {
        printf("Ingrese su nombre completo: ");
        fflush(stdin);
        gets(nombre[i]);
        printf("Ingrese la primera nota: ");
        scanf("%d", &nota1[i]);
        printf("Ingrese la segunda nota: ");
        scanf("%d", &nota2[i]);
        printf("Ingrese la tercera nota: ");
        scanf("%d", &nota3[i]);

        promedio[i] = calcularPromedio(nota1[i], nota2[i], nota3[i]);
    }
    return 0;
}

int mostrarAlumnos(char nombre[][50],int nota1[],int nota2[],int nota3[],float promedio[],int tam)
{
    int i;
    printf("%6s %6s %6s %6s %8s\n", "NOMBRE", "NOTA1", "NOTA2", "NOTA3", "PROMEDIO");
    for(i=0 ; i<tam ; i++)
    {
        printf("%20s %6d %6d %6d %.2f\n", nombre[i], nota1[i], nota2[i], nota3[i], promedio[i]);
    }
    return 0;
}

