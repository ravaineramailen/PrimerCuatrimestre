#include "funciones.h"

//Esta funcion SIEMPRE esta en los programas para inicializar los vectores
void inicializarVector(int vector[],int tam, int inic)
{
    int i;
    for(i=0; i<tam; i++)
    {
        vector[i] = -1;
    }
    vector[i]=inic;
}

int buscarLibre(int vector[], int tam, int valor)
{
    int indice = -1;
    int i;

    for (i=0; i<tam; i++)
    {
        if(vector[i]==valor)
        {
            indice= i;
            break;
        }
    }
    return indice;
}
