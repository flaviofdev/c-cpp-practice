#include <stdio.h>
#include <stdlib.h>

int main(){
    /*creating an 2x2 array with values from the user
    and flipping the rows after*/

    int array[2][2], aux1, aux2, i, j;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Enter a value to [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }    
    
    aux1 = array[0][0];
    aux2 = array[0][1];

    //flipping the values using auxiliary variables
    array[0][0] = array[1][0];
    array[0][1] = array[1][1];
    array[1][0] = aux1;
    array[1][1] = aux2;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }    
    return 0;
}