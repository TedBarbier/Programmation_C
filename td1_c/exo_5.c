#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
        int a=2, b=3, quotient, reste;
        quotient = a/b;
        reste = a%b;
        printf("quotient : %i\nreste : %i\n",quotient,reste);
}