#include <stdio.h>
#include <stdlib.h>

#include "jeu.h"
#include "stat.h"

int main(void){
    // Génère un nombre aléatoire à trouver
    int a_trouver = generer_hasard(), proposition = 0, verite = 1, tableau[MAX_NB_ATTEMPTS], nombre_essais = 0;
    float taux = 0.0;
    printf("nombre a trouver : %d\n", a_trouver);
    // Boucle jusqu'à ce que la proposition soit égale au nombre à trouver
    while (proposition != a_trouver){
        // Demande à l'utilisateur d'entrer une proposition
        proposition = entrer_nombre("Entrez une proposition : ");
        
        // Génère une valeur de vérité basée sur une distribution de Bernoulli
        verite = bernoulli_distribution(taux);
        
        // Modifie le taux d'alcoolémie en fonction de la vérité
        taux = modifie_alcoolemie(taux, verite);
        
        // Stocke la proposition dans le tableau
        if (nombre_essais == MAX_NB_ATTEMPTS-1) {
            printf("Trop d'essais, arrêt du programme\n");
            return EXIT_FAILURE;
        }
        tableau[nombre_essais] = proposition;
        nombre_essais++;
        
        // Affiche la comparaison entre la proposition et le nombre à trouver
        afficher_comparaison(proposition, a_trouver, verite);
        
        // Affiche le taux d'alcoolémie actuel
        printf("Taux d'alcoolémie : %.2f\n", taux);

    }
    // Affiche les statistiques
        statistiques(tableau, nombre_essais, a_trouver);
    return EXIT_SUCCESS;
}