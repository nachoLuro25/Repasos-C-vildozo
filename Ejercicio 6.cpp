#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void ordenar_cadena(char *cadena) {
    int i, j, temp;
    int n = strlen(cadena);

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (cadena[j] > cadena[j + 1]) {
                temp = cadena[j];
                cadena[j] = cadena[j + 1];
                cadena[j + 1] = temp;
            }
        }
    }
}

int son_anagramas(char *cadena1, char *cadena2) {
    int n1 = strlen(cadena1);
    int n2 = strlen(cadena2);

    if (n1 != n2) {
        return 0;
    }

    ordenar_cadena(cadena1);
    ordenar_cadena(cadena2);

    if (strcmp(cadena1, cadena2) == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char cadena1[MAX_LENGTH], cadena2[MAX_LENGTH];

    printf("Ingrese la primera cadena: ");
    fgets(cadena1, sizeof(cadena1), stdin);
    cadena1[strcspn(cadena1, "\n")] = '\0';

    printf("Ingrese la segunda cadena: ");
    fgets(cadena2, sizeof(cadena2), stdin);
    cadena2[strcspn(cadena2, "\n")] = '\0'; 


    if (son_anagramas(cadena1, cadena2)) {
        printf("Las cadenas son anagramas.\n");
    } else {
        printf("Las cadenas no son anagramas.\n");
    }

    return 0;
}
