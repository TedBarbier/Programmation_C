#include <stdio.h>


typedef struct Produit Produit;
struct Produit
{
    double prix;
    int quantite;
    double tva;
    double prix_ttc = prix * (1+tva);
    char libelle[255];
};

int main(int argc, char * argv[]){
    for (int i = 0; i<argv.len;i++)
    {
        Produit argv[i][4] = {argv[i][0], argv[i][1], argv[i][2], argv[i][3]};
    }

    return 0;
}