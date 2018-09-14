typedef struct
{
    int legajo;
    char nombre[20];
    float promedio;
    char direccion[50];

}eAlumno;

void mostrarAlumno(eAlumno);
eAlumno cargarAlumno();
void cargarListado(eAlumno[],int);
void mostrarListados(eAlumno[],int);
