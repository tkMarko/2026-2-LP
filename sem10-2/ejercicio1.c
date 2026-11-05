#include <stdio.h>

int main() {
    FILE *archivo;
    char linea[100];
    archivo = fopen("datos.txt", "r");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }
    //fgets (linea, ... si el resultado de fgets es NULL, significa que se llegó al final
    while (fgets(linea, sizeof(linea), archivo) != NULL) {
        printf("%s", linea);
    }

    fclose(archivo);
    return 0;
}