#include <stdio.h.>
#include <stdlib.h>

void showSucessor(int num){
    printf("The sucessor of %d is = %d \n", num, num + 1);
}

int returnPredecessor(int num){
    return num -1;
}

int main(){
    int a;
    printf("Enter a value: ");
    scanf("%d", &a);
    showSucessor(a);
    printf("The predecessor of %d is = %d \n", a, returnPredecessor(a));
    return 0;
}
