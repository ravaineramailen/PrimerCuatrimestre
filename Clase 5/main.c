#include <stdio.h>
#include <stdlib.h>
#include "Funciones-punteros.h"

int main()
{
    int miEntero=3;
    int estado;

    estado = miFuncion(&miEntero);

    printf("El nuevo valor es %d\n" , miEntero);

    if (estado==1)
    {
        printf("El valor es mayor a 15");
    }
    else
    {
        printf("El valor es menor o igual a 15");
    }
    return 0;
}

