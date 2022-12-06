#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void listadoEstudiantes(int cantEstReg, char estudiantes[][10], char cedulas[][100]){
    printf( "\nMenu Listado de estudiantes autorizados\n" );

    if(cantEstReg <= 0) {
        printf( "\n*** No hay estudiantes en el registro ***" );
        return;
    }

    for(int i= 0; i < cantEstReg; i++) {
        printf("\n%10s %s", cedulas[i], estudiantes[i]);
    } 
void Salir( bool *mark ){
    *mark = false;
}  








void Salir( bool *mark );
void listadoEstudiantes(int cantEstReg, char estudiantes[][10], char cedulas[][100]);












}
int main()
{
    int cantEstReg = 20;
    int respuesta;
    char cedulas[50][10];
    char estudiantes[50][100];
    bool mark = true;

    sprintf(cedulas[0], "%d", rand() % 1000000);
    strcpy( estudiantes[0], "Jose Jose" );

    while (mark);{

        printf("1. ver el listado de los estudiantes\n");
        printf("0.salir del prgrama\n");
        scanf("%d",& respuesta);
        switch (respuesta)
        {
        case 1:
            (cantEstReg, estudiantes, cedulas);

            break;
        case 0:
           Salir( &mark );
            break;
        
        default:
            break;
        }

    }
    
   return 0; 
}