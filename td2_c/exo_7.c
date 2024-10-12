#include <stdlib.h>
#include <stdio.h>

double part_dec(double nombre){
    return nombre - (int)nombre;
}

int main(int argc, char * argv[]){
    printf("%f\n",part_dec(10.456));
    printf("%f\n",part_dec(5.78));
}
