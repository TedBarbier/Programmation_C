#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos=0, neg=0; // Déclaration des variables
    printf("Entrez la taille du tableau: "); // Demande à l'utilisateur d'entrer la taille du tableau
    scanf("%d", &n); // Lecture de la taille du tableau
    int tab[n]; // Déclaration du tableau de taille n
    printf("Entrez les valeurs du tableau: "); // Demande à l'utilisateur d'entrer les valeurs du tableau
    for (int i = 0; i < n; i++) { // Boucle pour lire les valeurs du tableau
        scanf("%d", &tab[i]); // Lecture de chaque valeur du tableau
    }
    for (int i = 0; i < n; i++) { // Boucle pour compter les valeurs positives et négatives
        if (tab[i] >= 0) { // Si la valeur est positive ou nulle
            pos++; // Incrémente le compteur de valeurs positives
        } else if (tab[i] < 0) { // Si la valeur est négative
            neg++; // Incrémente le compteur de valeurs négatives
        }
    }
    printf("Il y a %d valeurs positives et %d valeurs négatives.\n", pos, neg); // Affiche le nombre de valeurs positives et négatives
    return EXIT_SUCCESS; // Retourne un succès à la fin du programme
}