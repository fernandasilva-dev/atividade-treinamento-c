#include <stdio.h>

void main(){
    int i;
    double aux = 1;
    double result = 0;

    for(i = 1; i <= 64;i++){
        result += aux;
        printf("\n casa %d: %.0f",i,aux);
        aux *= 2;
    }
    printf("\n\nQuantidade de graos = %.0f",result);

}//fim main