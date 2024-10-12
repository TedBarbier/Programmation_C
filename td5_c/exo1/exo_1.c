#include <stdio.h>
#include <stdlib.h>

int modifier_par_valeur(int a) {
    a = 5;
    printf("À l'intérieur de modifier_par_valeur : a = %d\n", a);
    return a;
}

void modifier_par_adresse(int *a) {
    *a = 10;
    printf("À l'intérieur de modifier_par_adresse : a = %d\n", *a);
}

int main() {
    int x = 3;
    printf("Avant d'appeler modifier_par_valeur : x = %d\n", x);
    x = modifier_par_valeur(x);
    printf("Après avoir appelé modifier_par_valeur : x = %d\n", x);
    printf("Oh, j'ai compris ce qu'est le passage par valeur !\n");

    printf("Avant d'appeler modifier_par_adresse : x = %d\n", x);
    modifier_par_adresse(&x);
    printf("Après avoir appelé modifier_par_adresse : x = %d\n", x);
    printf("Oh, j'ai compris ce qu'est le passage par adresse !\n");

    return EXIT_SUCCESS;
}