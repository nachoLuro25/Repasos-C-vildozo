#include <stdio.h>
#include <ctype.h>

int main() {
    char cadena[100];
    int vocales = 0;
    
    printf("Ingresa una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    for (int i = 0; cadena[i] != '\0'; i++) {
        char c = tolower(cadena[i]);
        
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vocales++;
        }
    }


    printf("La cadena tiene %d vocal(es).\n", vocales);

    return 0;
}

