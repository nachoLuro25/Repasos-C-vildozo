#include <stdio.h>

int main() {
    char nombre[100];
    char apellido[100];

    printf("Ingresa tu nombre: ");
    scanf("%s", nombre);

    printf("Ingresa tu apellido: ");
    scanf("%s", apellido);

    printf("%s %s.\n", nombre, apellido);

    return 0;
}
