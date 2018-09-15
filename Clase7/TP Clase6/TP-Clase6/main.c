#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char nombre[20];
    char apellido[20];
    char nombreCompleto[41]; //= "" FORMA DE LIMPIAR //la suma de nombre y apellido (19 nombre , 19 apellido , 1 coma , 1 espacio , 1 \0.
    char buffer[1000];
    int i;

    //CARGA NOMBRE Y APELLIDO A "NOMBRE COMPLETO" Y LO MUESTRA
    strcpy(nombreCompleto, apellido);
    strcat(nombreCompleto, ", ");
    strcat(nombreCompleto, nombre);

    strlwr(nombreCompleto); //hace todas las letras minusculas

    //PARA QUE LAS INICIALES QUEDEN MAYUSCULAS FORMA FACIL.
   /* for(i=0; i<strlen(nombreCompleto); i++)
    {
        if(i==0)
        {
            nombreCompleto [i] = toupper(nombreCompleto[i]);
        }
        if(nombreCompleto[i]==' ') // MANERA SIMPLE DE HACER
        {
            nombreCompleto [i+1] = toupper(nombreCompleto[i+1]); // Le sumo 1, ya que el que se cambia es el de al lado del espacio, no el mismo.
        }
    }*/

    //PARA QUE LAS INICIALES QUEDEN MAYUSCULAS.

    nombreCompleto [0] = toupper(nombreCompleto[0]);

     for(i=0; i<strlen(nombreCompleto); i++)
    {
        if(isspace(nombreCompleto[i])) // ISSPACE devuelve 0 si no es espacio o devuelve otro valor si es espacio
        {
            nombreCompleto [i+1] = toupper(nombreCompleto[i+1]); // Le sumo 1, ya que el que se cambia es el de al lado del espacio, no el mismo.
        }
    }

    puts(nombreCompleto);
    return 0;


}

int ingresarApellido (char[])
{
    puts("Ingrese su apellido: ");
    fflush(stdin);
    gets(buffer);
}

int validarApellido(char[])
{
    while(strlen(buffer)>19)
    {
        puts("Reingrese su apellido: ");
        fflush(stdin);
        gets(buffer);
    }

    strcpy(apellido, buffer);
}



 // >isalpha()<
// >isdigit('1' - 'h')< ,me devuelve 1 cuando es un numero, o devuelve 0 si le cargo otra cosa que no sea un numero
//atoi detecta una cadena y lo convierte en numero
