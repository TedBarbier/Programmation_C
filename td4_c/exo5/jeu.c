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
    
    // Retourner un nombre aléatoire entre 0 et RAND_MAX-1
    return rand() % MAX_NUMBER + 1;
}

int entrer_nombre(void) {
    int nombre;
    int result;
    do {
        printf("Veuillez entrer un nombre entre 1 et 100: ");
        result = scanf("%d", &nombre);
        while (getchar() != '\n'); // vider le tampon d'entrée
        if (result != 1) {
            printf("Entrée invalide. Veuillez entrer un entier.\n");
            nombre = -1; // forcer la boucle à continuer
        } else if (nombre < 1 || nombre > 100) {
            printf("Nombre invalide.\n");
        }
    } while (nombre < 1 || nombre > 100);
    return nombre;
}

// Fonction pour afficher le résultat de la comparaison
// Paramètres :
// - proposition : le nombre proposé par l'utilisateur
// - a_trouver : le nombre à trouver
// - verite : un indicateur de la véracité de l'énoncé (1 pour vrai, 0 pour faux)
void afficher_comparaison(int proposition, int a_trouver, int verite){
    // Si le nombre proposé est inférieur au nombre à trouver
    if (proposition < a_trouver){
        if(verite == 1){
            printf("C'est plus !\n"); // Indiquer que le nombre à trouver est plus grand
        } else {
            printf("C'est moins !\n"); // Indiquer que le nombre à trouver est plus petit
        }
    } 
    // Si le nombre proposé est supérieur au nombre à trouver
    // Si le nombre proposé est supérieur au nombre à trouver
    else if (proposition > a_trouver){
        if(verite == 1){
            printf("C'est moins !\n"); // Indiquer que le nombre à trouver est plus petit
        } else {
            printf("C'est plus !\n"); // Indiquer que le nombre à trouver est plus grand
        }
    } 
    // Si le nombre proposé est égal au nombre à trouver
    else {
        printf("Bravo, vous avez trouvé le nombre mystère !\n"); // Féliciter l'utilisateur pour avoir trouvé le nombre
    }
}

int bernoulli_distribution(float taux_courant) {
    // Initialiser le générateur de nombres aléatoires avec le temps actuel
    srand(time(NULL));
    
    // Générer un nombre aléatoire entre 0 et 1
    float random = (float)rand() / RAND_MAX;
    
    // Comparer le nombre aléatoire avec le taux courant
    if (random >= taux_courant) {
        return 1; // Retourner 1 si le nombre aléatoire est supérieur ou égal au taux courant
    } else {
        return 0; // Retourner 0 sinon
    }
}

// Fonction pour modifier le taux d'alcoolémie
// Paramètres:
// - taux_courant: pointeur vers le taux d'alcoolémie actuel
// - verite: indicateur de vérité (1 pour vrai, autre pour faux)
float modifie_alcoolemie(float taux_courant, int verite){
    if (verite == 1){// Si verite est 1, augmente le taux d'alcoolémie de 0.1
        taux_courant += 0.1;
    } else {// Sinon, divise le taux d'alcoolémie par 2
        taux_courant /= 2;
    }
    return taux_courant;
}