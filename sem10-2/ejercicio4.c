#include <stdio.h>

int main() {
    FILE *archivo;
    archivo = fopen("estudiantes.txt", "a");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    fprintf(archivo, "004,Jose,19\n");
    fprintf(archivo, "005,Abel,15\n");
    fclose(archivo);

    printf("Registros agregados correctamente.\n");

    return 0;
}
