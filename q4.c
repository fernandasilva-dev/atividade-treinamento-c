#include <stdio.h>

void main(){
    int num, i, resultado = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(num == 0){
        printf("\nFatorial de %d e 1");
    }else{
        printf("%d! = ",num);
        for(i = 1; i <= num; i++){
            resultado *= i;
            printf("%d x ",i);
        }
        printf("= %d",resultado);
    }
}//fim main