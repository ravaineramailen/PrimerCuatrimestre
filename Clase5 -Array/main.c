#include <stdio.h>
#include <stdlib.h>
#define T 5
//[[[[printf("&d", sizeof);]]]] --- Se utiliza para saber cuanta cantidad de memoria utiliza esa varieble.
//como perdir datos en un vector y luego mostrarlos.(carga secuencial con barrido secuencial)
/*int main()
{
    int miVector[T];//declarar vector
    int i;
    int aux;
    int flag = 0;

    for (i=0; i<T; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d" , &miVector[i]);
    }

    printf("Ingrese un numero a buscar: ");
    scanf("%d", &aux);

    for(i=0 ; i<T ; i++)
    {
        if (aux == miVector[i])
        {
            flag = 1;
            printf("Posicion %d\n", i);
            break;
        }
    }

    if (flag==0)
    {
        printf("No se encontro dato\n");
    }

    printf("\n muestro los pares: \n");
    for (i=0; i<T; i++)
    {
        if (miVector[i]%2 == 0)
        {
            printf("%d\n" , miVector[i]); //printf("%d\n" , &miVector[i]) muestra la direccion de memoria
        }

    }

    return 0;
}*/

//>>>>>>>>>>>>>>>>>>>>>>>>>>CONCEPTO SWAP<<<<<<<<<<<<<<<<<<<<<<<<<<<<
int main()
{
    int miVector[T] = {2,6,1,3,4};//declarar vector
    int i;
    int j;
    int aux;
    int flag = 0;

    for(i=0; i<T-1; i++)
    {
        for(j=i+1 ; j<T ; j++)
        {
            if (miVector[i] > miVector[j])//criterio de ordenamiento
            {
                //algoritmo burbujeo
                aux = miVector[i];
                miVector[i] = miVector[j];
                miVector[j] = aux;
            }
        }
    }

    return 0;
}
