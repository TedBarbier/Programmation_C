#include <stdlib.h>
#include <stdio.h>

int choix(int nombre){
    if (nombre >= 1 && nombre <= 10) {
        return 1;
    } else if (nombre > 10 && nombre <= 20) {
        return 2;
    } else {
        return 3;
    }
}

int main(int argc, char * argv[]){
    printf("%d\n",choix(9));
    printf("%d\n",choix(78));
}

