#include <stdio.h>

int main(int argc, char * argv[]){
    int age=0, i;
    struct {
        int min_age;
        int max_age;
        const char *description;
    } list[] = {
        { 6, 7, "Poussin" },
        { 8, 9, "Pupille" },
        { 10, 11, "Minime" },
        { 12, 100, "Cadet" } // Assuming 100 as an upper bound for "Cadet"
    };

    printf("donnez votre age : \n");
    scanf("%i",&age);

    for (i=0; i<4; i++) {
        if (age >= list[i].min_age && age <= list[i].max_age) {
            printf ("%s\n", list[i].description);
            break;
        }
    }
    if (i == 4) {
        printf ("Age not in range\n");
    }

    return 0;
}