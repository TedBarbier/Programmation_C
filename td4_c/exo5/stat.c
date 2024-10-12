#include <stdio.h>
#include <stdlib.h>

void statistiques(int tableau[], int nombre_essais, int a_trouver) {
    float erreur_moyenne = 0.0, erreur_moyenne_quadratique = 0.0;
    // Calcule l'erreur quadratique moyenne
    for (int j = 0; j < nombre_essais; j++) {
        erreur_moyenne += abs(tableau[j] - a_trouver);
        erreur_moyenne_quadratique += (tableau[j] - a_trouver) * (tableau[j] - a_trouver);
    }
    erreur_moyenne /= nombre_essais;
    erreur_moyenne_quadratique /= nombre_essais;

    // Affiche le nombre d'essais et l'erreur quadratique moyenne
    printf("\nNombre d'essais : %d\n", nombre_essais);
    printf("Erreur moyenne : %.2f\n", erreur_moyenne);
    printf("Erreur quadratique moyenne : %.2f\n", erreur_moyenne_quadratique);
}