#include <stdio.h>
#include <stdlib.h>

void main(){
    int a = 10;
    printf("\nEndereco a: %p", &a);
    printf("\nValor a: %d", a);

    int *p = &a;
    quadrado(p);
    p =  &a;
    printf("\nEndereco p: %p",p);
    printf("\nValor p: %d", *p);

    quadrado(4,&a);
}//fim main

void quadrado(int *y){
    *y = 20;

}