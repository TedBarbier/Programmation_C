#include <stdio.h> 
#include <stdlib.h> 
int main(void){
    int sum = 0; 
    for (i=1;i<200;i++){
        sum += i**2;
    }
    printf("The sum of the squares of the first 200 integers is %d\n", sum);
}