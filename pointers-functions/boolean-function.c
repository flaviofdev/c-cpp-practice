#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool returnBoolean();

int main(){

    bool boolVar;
    boolVar = returnBoolean();

    if(boolVar){
        printf("True.");
    }else{
        printf("False.");
    }
    return 0;
}

bool returnBoolean(){
    return true;
}