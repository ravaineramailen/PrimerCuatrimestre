#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#define T 5

//>>>>>>>>>>>>>>>>>>CARGA ALEATORIA<<<<<<<<<<<<<<<<<<<<
int main()
{
    int miVector[T];
    int suma;
    int opcion;

    inicializarVector(miVector,T);
    do
    {
        printf("1- Cargar\n2-Mostar\n3-Suma\n4-Salir\nElija una opcion: ");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            cargarVector(miVector,T);
        break;
        case 2:
            mostrarVector(miVector,T);
        break;
        case 3:
            suma = sumaValores(miVector,T);
            printf("La suma es: %d", suma);
        break;
        }
    } while(opcion != 4);

    return 0;
}
