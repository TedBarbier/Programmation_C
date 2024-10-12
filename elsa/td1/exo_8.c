#include <stdio.h>

int main(int argc, char * argv[]){
    int heures, minutes;
    printf("donnez l'heure :");
    scanf("%2d", &heures);
    printf("donnez les minutes :");
    scanf("%2d", &minutes);
    if ((heures >= 0 && heures <= 23) && (minutes >= 0 && minutes <= 59)) {
        if (minutes == 59) {
            if (heures == 23){
                heures = 0;
            }else {heures ++;}
            minutes = 0;
        }
        else {minutes ++;
        }
        printf("dans une minute il sera %dheure(s)%d\n", heures, minutes);
    } else {
        printf("heure invalide\n");
    }
    return 0;
}