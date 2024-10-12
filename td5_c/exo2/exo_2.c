#include <stdio.h>
#include <stdlib.h>

// Fonction pour afficher les n premiers éléments d'un tableau
void affiche_n(int t[], unsigned int n){
    for (unsigned int i = 0; i < n; i++){
        printf("%d ", t[i]); // Affiche chaque élément suivi d'un espace
    }
    printf("\n"); // Affiche une nouvelle ligne à la fin
}

// Fonction pour afficher une valeur entière unique
void passe_valeur(int valeur){
    printf("%d\n", valeur); // Affiche la valeur entière suivie d'une nouvelle ligne
}

// Fonction pour afficher les 3 premiers éléments d'un tableau à partir de l'adresse donnée
void passe_adresse(int *t){
    affiche_n(t, 3); // Appelle affiche_n pour afficher les 3 premiers éléments
}

int main() {
    int t[10] = {1, 2, 3, 4, 18, 6, 7, 8, 9, 10}; // Initialise un tableau de 10 entiers
    affiche_n(t, 2); // Affiche les 2 premiers éléments du tableau
    passe_valeur(t[4]); // Affiche la valeur à l'index 4 du tableau
    passe_adresse(t+4); // Affiche les 3 premiers éléments à partir de l'index 4
    return EXIT_SUCCESS; // Retourne le statut de succès
}