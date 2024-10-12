#include <stdio.h>
#include <stdlib.h>

#include "jeu.h"


int main(void){
    // Génère un nombre aléatoire à trouver
    int a_trouver = generer_hasard();
    int proposition = 0, verite = 1;
    float taux = 0.0;

    //printf("nombre a trouver : %d\n", a_trouver);

    // Boucle jusqu'à ce que la proposition soit égale au nombre à trouver
    while (proposition != a_trouver){
        // Demande à l'utilisateur d'entrer un nombre
        proposition = entrer_nombre("Entrez une proposition : ");
        
        // Génère une valeur de vérité basée sur une distribution de Bernoulli
        verite = bernoulli_distribution(taux);
        //printf("verite : %d\n", verite);
        // Modifie le taux d'alcoolémie en fonction de la valeur de vérité
        taux = modifie_alcoolemie(taux, verite);
        //printf("taux d'alcoolemie : %f\n", taux);
        // Affiche la comparaison entre la proposition et le nombre à trouver
        afficher_comparaison(proposition, a_trouver, verite);
        //printf("----------------\n");
    }
    return EXIT_SUCCESS;
}