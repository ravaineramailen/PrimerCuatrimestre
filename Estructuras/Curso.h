typedef struct
{
    int id;
    char nombre[30];
    int duracion;
    char profesor[20];
} eCurso;

void inicializarCursos (eCurso*);
void mostrarCursos(eCurso);
void mostrarTodosLosCursos(eCurso*, int);
