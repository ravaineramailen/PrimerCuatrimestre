#include <stdio.h>
#include <stdlib.h>
#include "Funciones-punteros.h"

int miFuncion (int* pValor)
{
    int queDevuelve =0;
    int aux;
    aux = (*pValor);

    aux += 10;

    if (aux>15)
    {
        queDevuelve = 1;
    }
    (*pValor) = aux;

    return queDevuelve;
}
