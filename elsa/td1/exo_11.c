#include <stdio.h>

int main(int argc, char * argv[]){
    int candidat1, candidat2, candidat3, candidat4, somme;
    float pourcentage1, pourcentage2, pourcentage3, pourcentage4;

    printf("donnez le nombre de voix du candidat 1 :");
    scanf("%d", &candidat1);
    if (candidat1 < 0) {
        printf("Le nombre de voix doit être >= 0.\n");
        return 1;
    }

    printf("donnez le nombre de voix du candidat 2 :");
    scanf("%d", &candidat2);
    if (candidat2 < 0) {
        printf("Le nombre de voix doit être >= 0.\n");
        return 1;
    }

    printf("donnez le nombre de voix du candidat 3 :");
    scanf("%d", &candidat3);
    if (candidat3 < 0) {
        printf("Le nombre de voix doit être >= 0.\n");
        return 1;
    }

    printf("donnez le nombre de voix du candidat 4 :");
    scanf("%d", &candidat4);
    if (candidat4 < 0) {
        printf("Le nombre de voix doit être >= 0.\n");
        return 1;
    }

    somme = candidat1 + candidat2 + candidat3 + candidat4;

    pourcentage1 = (float)candidat1 / somme * 100;
    pourcentage2 = (float)candidat2 / somme * 100;
    pourcentage3 = (float)candidat3 / somme * 100;
    pourcentage4 = (float)candidat4 / somme * 100;

    printf("Candidat 1: %.2f%%\n", pourcentage1);
    if (pourcentage1 > 50) {
        printf("Candidat 1 est élu au premier tour.\n");
    } else if (pourcentage1 > 12.5) {
        printf("Candidat 1 participera au 2ème tour.\n");
        if (pourcentage1 > 25) {
            printf("Candidat 1 est en ballottage favorable.\n");
        } else {
            printf("Candidat 1 est en ballottage défavorable.\n");
        }
    } else {
        printf("Candidat 1 est battu.\n");
    }

    printf("Candidat 2: %.2f%%\n", pourcentage2);
    if (pourcentage2 > 50) {
        printf("Candidat 2 est élu au premier tour.\n");
    } else if (pourcentage2 > 12.5) {
        printf("Candidat 2 participera au 2ème tour.\n");
        if (pourcentage2 > 25) {
            printf("Candidat 2 est en ballottage favorable.\n");
        } else {
            printf("Candidat 2 est en ballottage défavorable.\n");
        }
    } else {
        printf("Candidat 2 est battu.\n");
    }

    printf("Candidat 3: %.2f%%\n", pourcentage3);
    if (pourcentage3 > 50) {
        printf("Candidat 3 est élu au premier tour.\n");
    } else if (pourcentage3 > 12.5) {
        printf("Candidat 3 participera au 2ème tour.\n");
        if (pourcentage3 > 25) {
            printf("Candidat 3 est en ballottage favorable.\n");
        } else {
            printf("Candidat 3 est en ballottage défavorable.\n");
        }
    } else {
        printf("Candidat 3 est battu.\n");
    }

    printf("Candidat 4: %.2f%%\n", pourcentage4);
    if (pourcentage4 > 50) {
        printf("Candidat 4 est élu au premier tour.\n");
    } else if (pourcentage4 > 12.5) {
        printf("Candidat 4 participera au 2ème tour.\n");
        if (pourcentage4 > 25) {
            printf("Candidat 4 est en ballottage favorable.\n");
        } else {
            printf("Candidat 4 est en ballottage défavorable.\n");
        }
    } else {
        printf("Candidat 4 est battu.\n");
    }
    return 0;
}