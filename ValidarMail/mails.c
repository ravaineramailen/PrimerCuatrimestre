#include <stdio.h>
#include <stdlib.h>
#include "mails.h"
#define LEN 100
#define CHARLEN 50

int getEmail(char* email)
{
    int retorno = -1;
    int indexArroba = -1;//bandera
    int i;
    int indexPunto = -1;//bandera
    char auxiliar[CHARLEN];

    fgets(auxiliar,CHARLEN,stdin);

    if(auxiliar!= NULL && strlen(auxiliar)<= CHARLEN && strlen(auxiliar)>0)
    {
        for(i=0 ; i<strlen(auxiliar)-1; i++)
        {
            if(auxiliar[i] == '@')
            {
               if (indexArroba == -1)
               {
                   retorno = 0;
                   indexArroba = i;
                   strcpy(email,auxiliar);
               }
               else
               {
                   retorno = -1;
                   break;
               }
            }
            if(auxiliar[i]== '.' && indexArroba != -1)
            {
                indexPunto = i;
            }
        }
        if (indexArroba == -1 || indexPunto != -1)
        {
            retorno = -1;
        }

        strcpy(email,auxiliar);
        retorno = 0;
    }

    return retorno;
}
