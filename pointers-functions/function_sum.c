#include <stdio.h>
#include <stdlib.h>

void showSum(int vOne, int vTwo){
    printf("The sum between %d and %d is = %d\n", vOne, vTwo, vOne + vTwo);
}

int returnSum(int vOne, int vTwo){
    return vOne + vTwo;
}

int main(){
    int a = 5, b = 7, c = 5, d = 5;
    showSum(a,b);
    printf("The sum between %d and %d is = %d", c, d, returnSum(c,d));
    return 0;
}