#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nombre[100];
    char* descripcion;

    strcpy(nombre, "Jose Galindo");

    /*Asignacion dinamica de memoria*/
    descripcion = malloc( 200 * sizeof(char) );

    if (descripcion == NULL) {
        fprintf(stderr, "Error - No fue posible asignar la memoria solicitada.\n");
    } else {
        strcpy(descripcion, "Programador movil.");
    }
    
    printf("Nombre: %s\n", nombre);
    printf("Descripcion: %s", descripcion);
    free(descripcion);
    return 0;
}