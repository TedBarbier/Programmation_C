#include <stdio.h>

int main(int argc, char * argv[]){
    int nombre;
    printf("donnez un nombre :");
    scanf("%d", &nombre);
    if (nombre > 0) {
        printf("positif\n");
    } else {
        printf("negatif\n");
    }
    return 0;
}
