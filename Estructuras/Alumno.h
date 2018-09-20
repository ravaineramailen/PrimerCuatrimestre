#define VACIO 0
#define OCUPADO 1
#define ELIMINADO -1


typedef struct
{
    int legajo;
    char nombre[20];
    float promedio;
    char direccion[50];
    int estado;

}eAlumno;

void mostrarAlumno(eAlumno);

eAlumno cargarAlumno();

/** \brief da de alta un alumno en el listad
 *
 * \param eAlumnno[] el listado
 * \param tam int el tamaño del listado
 * \return int 0 (si la capacidad de la lista se agoto) / 1 (si se pudo guardar)
 *
 */
int cargarAlumnoEnListado(eAlumno[],int);

void mostrarListados(eAlumno[],int);

void inicializarAlumnos(eAlumno[],int,int);

int buscarEspacio(eAlumno[],int);

int borrarAlumno(eAlumno[], int);
