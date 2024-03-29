#include <stdio.h>
#include <stdlib.h>

float valor_a(int n){
    float aux = n;
    float a = 0;

    for(int i = 1; i <= n; i++){
        a += (aux - i) / (i + 1);
    }
    return a;
}

int main(){
    while ("True"){
    
        int n;
        printf("\nDigite um numero inteiro positivo: ");
        scanf("%d",&n);

        if(n > 0){
            double result = valor_a(n);
            printf("\nO valor de A e: %f",result);
            printf("\n ");
        }else{
            printf("O numero nao e inteiro positivo!!!\n");
            return 1;
            system("Pause");
        }
        
    }
    return 0;
}