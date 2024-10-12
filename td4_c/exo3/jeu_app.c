#include <stdio.h>
#include <stdlib.h>

#include "jeu.h"

int main(void){
    // Générer un nombre aléatoire à trouver
    int a_trouver = generer_hasard();
    
    // Initialiser la proposition de l'utilisateur
    int proposition = 0;

    //printf("nombre a trouver : %d\n", a_trouver);
    
    // Boucle jusqu'à ce que la proposition soit égale au nombre à trouver
    while (proposition != a_trouver){
        // Demander à l'utilisateur d'entrer un nombre
        proposition = entrer_nombre("Entrez une proposition : ");
        
        // Afficher la comparaison entre la proposition et le nombre à trouver
        afficher_comparaison(proposition, a_trouver);
    }
    
    // Retourner 0 pour indiquer que le programme s'est terminé correctement
    return EXIT_SUCCESS;
}