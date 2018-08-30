#include <stdio.h>
#include <stdlib.h>

/* >>>>>>>>>>>>>>>>>>>> FUNCIONES <<<<<<<<<<<<<<<<<<<<<<<


------DEVUELVE 0 | RECIBE 0------
void sumar(void);

int main()
{
    sumar();
    return 0;
}

void sumar(void)
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese el primer numero: ");
    scanf("%d" , &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d" , &numeroDos);

    suma = numeroUno + numeroDos;

    printf("El resultado de la suma es: %d" , suma);
}

------DEVUELVE 0 | RECIBE 1------
void sumar(int , int);

int main()
{
    int numeroUno;
    int numeroDos;

    printf("Ingrese el primer numero: ");
    scanf("%d" , &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d" , &numeroDos);

    sumar(numeroUno , numeroDos);

    return 0;
}

void sumar(int numeroUno, int numeroDos)
{
    int suma;

    suma = numeroUno + numeroDos;

    printf("El resultado de la suma es: %d" , suma);
}

------DEVUELVE 1 | RECIBE 0------
int sumar(void);

int main()
{
    int suma;
    suma = sumar ();

    printf("El resultado de las sumas es: %d" , suma);

    return 0;
}

int sumar(void)
{
    int suma;
    int numeroUno;
    int numeroDos;

    printf("Ingrese el primer numero: ");
    scanf("%d" , &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d" , &numeroDos);

    suma = numeroUno + numeroDos;

    return suma;
}

------DEVUELVE 1 | RECIBE 1------ (La que se va a utilizar) >como forzar a una funcion a devolver<
int sumar(int, int);

int main()
{
    int suma;
    int numeroUno;
    int numeroDos;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = sumar(numeroUno,numeroDos);

    printf("El resultado de las sumas es: %d", suma);

    return 0;
}

int sumar(int numeroUno, int numeroDos)
{
    int suma;

    suma = numeroUno + numeroDos;

    return suma;
}*/
