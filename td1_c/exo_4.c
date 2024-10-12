#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]) {
        if ( 2 == 2.5){
                printf("tout se passe pas bien\n");
        }else{
                printf("tout se passe bien %i\n",2==(int)2.5);
        }
}