#include <stdio.h> 
#include <stdlib.h> 
int main(void){
    int sum = 0;
    int k = 0;
    do {
    printf("saisissez un nombre");
    scanf("%d", &k);
    }while k<=0
    for (i=1;i<k;i++){
        sum += i**2;
    }
    printf("The sum of the squares of the first %d integers is %d\n", k, sum);
}