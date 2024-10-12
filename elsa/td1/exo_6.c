#include <stdio.h>

int main(int argc, char * argv[]){
    int nombre, nombre2;
    printf("donnez un nombre :");
    scanf("%d", &nombre);
    printf("donnez un deuxième nombre :");
    scanf("%d", &nombre2);
    if (((nombre > 0) && (nombre2 > 0)) || ((nombre < 0) && (nombre2 < 0))) {
        printf("positif\n");
    } else {
        printf("negatif\n");
    }
    return 0;
}