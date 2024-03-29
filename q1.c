#include <stdio.h>

void print_num(int num, int num2){
    int i, prov, soma;
    printf("--Numeros Pares--\n");
    for(i = num; i<num2; i++){
        prov = i % 2;
        if(prov == 0){
            printf("%d\n",i);
            soma += i;
        }       
    }
    printf("Soma dos numeros pares: %d",soma);
}

void main(){
    print_num(85, 907);
}
