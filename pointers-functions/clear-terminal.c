#include <stdio.h>
#include <stdlib.h>

void clearTerminal();

int main(){
    int a;
    printf("Enter an integer value to 'a': ");
    scanf("%d", &a);

    clearTerminal();

    printf("a = %d", a);
}

void clearTerminal(){
    system("CLS");  
}