#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "jeu.h"

// Définir la valeur maximale pour la génération de nombres aléatoires
#define MAX_NUMBER 100

// Fonction pour générer un nombre aléatoire
int generer_hasard(void) {
    // Initialiser le générateur de nombres aléatoires avec le temps actuel
    srand(time(NULL));
    
    // Retourner un nombre aléatoire entre 1 et RAND_MAX
    return rand() % 100 + 1;
}

// Fonction pour entrer un nombre valide entre 1 et 100
int entrer_nombre(void) {
    int nombre; // Variable pour stocker le nombre entré
    int result; // Variable pour stocker le résultat de scanf
    do {
        // Demander à l'utilisateur d'entrer un nombre entre 1 et 100
        printf("Veuillez entrer un nombre entre 1 et 100: ");
        result = scanf("%d", &nombre); // Lire l'entrée de l'utilisateur
        while (getchar() != '\n'); // Vider le tampon d'entrée
        if (result != 1) {
            // Si l'entrée n'est pas un entier valide
            printf("Entrée invalide. Veuillez entrer un entier.\n");
            nombre = -1; // Forcer la boucle à continuer
        } else if (nombre < 1 || nombre > 100) {
            // Si le nombre n'est pas dans la plage valide
            printf("Nombre invalide.\n");
        }
    } while (nombre < 1 || nombre > 100); // Répéter jusqu'à ce qu'un nombre valide soit entré
    return nombre; // Retourner le nombre valide
}

void afficher_comparaison(int proposition, int a_trouver){
    // Si le nombre proposé est inférieur au nombre à trouver
    if (proposition < a_trouver){
        printf("C'est plus !\n"); // Indiquer que le nombre à trouver est plus grand
    } 
    // Si le nombre proposé est supérieur au nombre à trouver
    else if (proposition > a_trouver){
        printf("C'est moins !\n"); // Indiquer que le nombre à trouver est plus petit
    } 
    // Si le nombre proposé est égal au nombre à trouver
    else {
        printf("Bravo, vous avez trouvé le nombre mystère !\n"); // Féliciter l'utilisateur pour avoir trouvé le nombre
    }
}