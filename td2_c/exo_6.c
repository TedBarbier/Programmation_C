#include <stdlib.h>
#include <stdio.h>

int part_ent(double nombre){
    return (int) nombre;
}

int main(int argc, char * argv[]){
    printf("%d\n",part_ent(10.56));
    printf("%d\n",part_ent(78));
}

