int main(int argc, char * argv[]){
    int a;
    do {
        printf("Saisissez un nombre: ");
        scanf("%d", &a);
        if (a % 10 != 0) {
            printf("Erreur: le nombre doit être un multiple de 10.\n");
        }
    } while (a % 10 != 0);
    printf("Vous avez saisi: %d\n", a);
    return 0;
}