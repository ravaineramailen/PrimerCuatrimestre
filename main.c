#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, numMax, numMin;
    int cont =0;
    int sumaNeg =0;
    int sumaPos =0;
    int cantNeg =0;
    int cantPos =0;
    int cantCero =0;
    int cantPar =0;
    float promPos, promNeg;
    int diferencia;
    int maximo;
    int flag=0;
    char respuesta;

    do
    {
        cont++;

        printf("Ingrese un numero: ");
        scanf("%d", &numero);

        if (numero<0)
        {
            sumaNeg = sumaNeg + numero; //1-Suma de los negativos.
            cantNeg ++; //4-Cantidad de negativos.
        }
        else if (numero==0)
        {
            cantCero++; //5-Cantidad de ceros.
        }
        else
        {
            sumaPos = sumaPos + numero; //2-Suma de los positivos.
            cantPos ++; //3-Cantidad de positivos.
        }

        if (numero%2==0)
        {
            cantPar++; //6-Cantidad de números pares.
        }
        if(flag==0||numero>maximo)
        {
            maximo=numero;
            flag=1;
        }

        printf("Si desea seguir, ingrese (S): ");
        setbuf(stdin,NULL);
        scanf("%c", &respuesta);
    }
    while (respuesta == 'S');

    promPos = (int)sumaPos/sumaPos; //7-Promedio de positivos.

    promNeg = (int)sumaNeg/cantNeg; //8-Promedios de negativos.

    diferencia = sumaPos - sumaNeg; //9-Diferencia entre positivos y negativos, (positvos-negativos).

    printf("La suma de los negativos es: %d\n", sumaNeg);
    printf("La suma de los positivos es: %d\n", sumaPos);
    printf("La cantidad de los positivos es: %d\n", cantPos);
    printf("La cantidad de los negativos es: %d\n", cantNeg);
    printf("La cantidad de ceros es: %d\n", cantCero);
    printf("La cantidad de numeros pares es: %d\n", cantPar);
    printf("El promedio de positivos es: %d\n", promPos);
    printf("El promedio de negativos es: %d\n", promNeg);
    printf("La diferencia entre positivos y negativos es: %d\n", diferencia);
    return 0;
}

