#include <stdio.h>
#include <stdlib.h>

// Fonction toto qui prend un entier en argument
void toto(int z){
    // Affecte la valeur 40 à la variable z
    z = 40;
    // Affiche la valeur de z
    printf("%d\n", z);
}

int main() {
    int z = 10;
    // Appelle la fonction toto avec la valeur de z
    toto(z);
    // Affiche la valeur de z après l'appel de la fonction toto
    printf("%d\n", z);
    return EXIT_SUCCESS;
}