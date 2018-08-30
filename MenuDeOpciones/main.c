#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
int main()
{
    char opcion;

    do
    {
        printf("(A)lta usuario\n");
        printf("(B)aja usuario\n");
        printf("(M)odificacion usuario\n");
        printf("(S)alir\n");

        printf("Elija una opcion: ");
        setbuf(stdin,NULL);
        scanf("%c" , &opcion);
        opcion = toupper (opcion); //pasa de una miniscula a mayuscula

        switch(opcion)
        {
            case 'A':
                printf("Estoy dando de alta...\n");
            break;
            case 'B':
                printf("Estoy dando de baja...\n");
            break;
            case 'M':
                printf("Estoy modificando...\n");
            break;

        }

        system("pause"); //hace una pausa
        system("cls"); //limpia la pantalla

    } while (opcion != 'S');

    return 0;
}
*/

int pedirNumero(char[]);

int main()
{
    int legajo;
    int nota;
    int edad;


    legajo = pedirNumero("Ingrese un legajo: ");

    nota = pedirNumero("Ingrese una nota: ");

    edad = pedirNumero("Ingrese una edad: ");
    return 0;
}

int pedirNumero(char texto [])
{
    int numero;
    printf("%s", texto);
    scanf("%d" , &numero);
    return numero;
}
