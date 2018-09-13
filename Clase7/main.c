#include <stdio.h>
#include <stdlib.h>
#include <string.h>
# include "funciones.h"

int main()
{
    char cadena1[10];
    char cadena2[50]= "Hola a todos, como estan?";
    strncpy(cadena1, cadena2, 9); //pone un limite de caracteres.

    puts(cadena1); //lo mismo que printf pero sin mascara
    return 0;
}
