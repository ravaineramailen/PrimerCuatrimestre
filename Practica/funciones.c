#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int esSoloLetras(char str[])
 {
    int i=0;
    while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] < 'a' || str[i]> 'z') && (str[i] < 'A' || str[i]> 'Z'))
        {
            return 0;
            i++;
        }
    }
    return 1;
 }

int validarNombre (char nombre[], char buffer[])
{
    puts("Ingrese su nombre: ");
    fflush(stdin);
    gets(buffer);

    while (esSoloLetras(buffer) != 1)
    {
        puts("Reingrese su nombre: ");
        fflush(stdin);
        gets(buffer);
    }

    while(strlen(buffer)>19)
    {
        puts("Reingrese su nombre: ");
        fflush(stdin);
        gets(buffer);
    }

    strcpy(nombre, buffer);

    return nombre;
}

int validarApellido (char apellido[], char buffer[])
{
    puts("Ingrese su apellido: ");
    fflush(stdin);
    gets(buffer);

    while (esSoloLetras(buffer) != 1)
    {
        puts("Reingrese su apellido: ");
        fflush(stdin);
        gets(buffer);
    }

    while(strlen(buffer)>19)
    {
        puts("Reingrese su apellido: ");
        fflush(stdin);
        gets(buffer);
    }

    strcpy(apellido, buffer);

    return apellido;
}

