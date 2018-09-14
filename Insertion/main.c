#include <stdio.h>
#include <stdlib.h>

//>>>>>>>>>>>>>>>>>>>>COMPLETAR<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
void insertion(int,int);

int main()
{
    int vector[4]= {4,3,1,2};


    return 0;
}

void insertion(int data[],int len)
{
    int i,j;
    int temp;
    for(i=1; i<len; i++)
    {
        temp = data[i];
        j=i-1;
        while(j>=0 && temp<data[j]) // temp<data[j] o temp>data[j]
        {
            data[j+1] = data[j];
            j--;
        }
        data[j+1]=temp; // inserción
    }



