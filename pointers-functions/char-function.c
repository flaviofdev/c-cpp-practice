#include <stdio.h>
#include <stdlib.h>

char returnCharacter();

int main(){

    char Character;
    Character = returnCharacter();
    printf("%c", Character);
    return 0;
}

char returnCharacter(){
    return 'x';
}