#include <stdio.h>

int toto(int *z){
    z = 40;
    printf("%d\n", z);
}

int main() {
    int z=10;
    toto(z);
    printf("%d\n", z);
    return 0;
}