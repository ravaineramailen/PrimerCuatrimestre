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
int pedirFlotante(char[]);
int pedirCaracter(char[]);

int main()
{
    int legajo;
    int nota;
    int edad;
    int sexo;


    legajo = pedirNumero("Ingrese un legajo: ");
    edad = pedirNumero("Ingrese una edad: ");
    nota = pedirFlotante("Ingrese una nota: ");
    sexo = pedirCaracter("ingrese el sexo masculino (M) o femenino (F): ");

    printf("El numero de legajo ingresado es: %d\n", legajo);
    printf("La edad ingresada es: %d\n", edad);
    printf("La nota ingresada es: %f\n", nota);
    printf("El sexo ingresado es: %c\n", sexo);

    return 0;
}

int pedirNumero(char texto [])
{
    int numero;
    printf("%s", texto);
    scanf("%d" , &numero);
    return numero;
}

int pedirFlotante(char texto [])
{
    float numFlotante;
    printf("%s", texto);
    scanf("%f" , &numFlotante);
    return numFlotante;
}

int pedirCaracter(char texto [])
{
    char caracter;
    printf("%s", texto);
    setbuf(stdin,NULL);
    scanf("%c" , &caracter);
    caracter = toupper (caracter);
    return caracter;
}
