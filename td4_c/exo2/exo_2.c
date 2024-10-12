#include <stdio.h>
#include <stdlib.h>

// Fonction toto qui prend un entier en argument
int toto(int z) {
    // Modifie la valeur de z à 40
    z = 40;
    // Affiche la valeur modifiée
    printf("%d\n", z);
    // renvoie la valeur modifié
    return z;
}

int main() {
    // Déclare une variable entière z et l'initialise à 10
    int z = 10;
    // On déclare z comme étant égale à la valeur renvoyée par la fonction toto
    z=toto(z);
    // Affiche la valeur de z après l'appel de la fonction toto
    printf("%d\n", z);
    return EXIT_SUCCESS;
}