#include <stdio.h>
#include <stdlib.h>

void printArray(int *array, int size){
    int i;
    for(i = 0; i < size; i++){
        printf("%d \n", array[i]);
    }
}

void modArray(int *array, int size){
    int i;
    for(i = 0; i < size; i++){
        array[i] = array[i] + 1;
    }
}

int main(){
    int array[3] = {1, 2, 3};
    printArray(array, 3);
    modArray(array, 3);
    printArray(array, 3);
    return 0;
}