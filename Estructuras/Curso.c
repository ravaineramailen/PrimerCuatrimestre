#include "Curso.h"

void inicializarCursos(eCurso* curso)
{
    int id[3]={100,101,102};
    char nombre[3][30]={"PHP","C#","VB"};
    int duracion[3]={3,5,6};
    char profesor[3][20]={"Christian","Octavio","Maxi"};
    int i;
    for(i=0;i<3;i++)
    {
        curso[i].id=id[i];
        curso[i].duracion=duracion[i];
        strcpy (curso[i].nombre,nombre[i]);
        strcpy (curso[i].profesor,profesor[i]);
    }
}

void mostrarCursos(eCurso curso)
{
    printf("%s---%s---%d", curso.nombre,curso.profesor,curso.duracion);
}

void mostrarTodosLosCursos(eCurso* cursos, int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        mostrarCursos(cursos[i]);
    }
}
