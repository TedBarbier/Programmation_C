#include <stdio.h>

int main(int argc, char * argv[]){
    int age, sexe; // sexe 1 = homme, 2 = femme comme la securité sociale
    printf("donnez votre age :");
    scanf("%d", &age);
    printf("donnez votre sexe (1 pour homme, 2 pour femme) :");
    scanf("%d", &sexe);
    if (age <= 1){
        printf("age invalide\n");
        return 1;
    }
    if (sexe == 1){
        if (age >= 20){
            printf("vous êtes imposable\n");
        } else {
            printf("vous n'êtes pas imposable\n");
        }
    } else if (sexe == 2){
        if (age >= 18 && age <= 35){
            printf("vous êtes imposable\n");
        } else {
            printf("vous n'êtes pas imposable\n");
        }
    } else {
        printf("sexe invalide\n");
        return 1;
    }
    return 0;
}