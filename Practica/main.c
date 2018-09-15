#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char nombre[20];
    char apellido[20];
    char nombreCompleto[41];
    char buffer[20];
    int i;

    validarNombre(nombre, buffer);
    validarApellido(apellido, buffer);

    return 0;
}
