#include <stdio.h>
#include <unistd.h>
#include "show.h"

void Print(int *ptr, int ok){
    if (ok == 0){
        printf("(%d) addr pointed to by p: %p\n", (int)getpid(), (void*)ptr);
    }else{
        printf("(%d) value of p: %d\n", getpid(), *ptr); 
    }
}