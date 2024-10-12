#include <stdio.h>

int main(int argc, char * argv[]){
    int photocopies = 0;
    double facture = 0.0;
    printf("combien de photocopies avez vous effectués :");
    scanf("%d", &photocopies);
    if (photocopies <= 10) {
        facture = photocopies * 0.10;
    } else if (photocopies <= 30) {
        facture = 10 * 0.10 + (photocopies - 10) * 0.09;
    } else {
        facture = 10 * 0.10 + 20 * 0.09 + (photocopies - 30) * 0.08;
    }

    printf("La facture finale est de %.2f€\n", facture);
    return 0;
}