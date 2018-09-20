#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define C 5

int main()
{
    int array[5];
    int i;
    char seguir;
    int flag = 0;
    int indice;

    inicializarVector(array, C, -1);
    do
    {
        indice = buscarLibre(array, C, -1);

        if (indice != -1)
        {
            printf("Ingrese un numero: \n");
            scanf("%d",&array[i]);
        }
        else
        {
           printf("No hay lugar");
            break;
        }

        printf("Desea ingresar otro numero?\n");
        seguir = getche();

    }while(seguir=='s');

    return 0;
}
