#include <stdio.h>

#define N 10

float media_num(int num[]){
    int soma = 0;
    int i;
    float media;
    for(i = 0; i < N; i ++){
        soma += num[i];
    }
    media = soma / N;
    return media;
}//fim media_num

void maior_num(int num[]){
    int maior = 0;
    int i;
    for(i = 0; i < N; i ++){
        if(num[i] > maior){
            maior = num[i];  
        } 
    }
    printf("\nMAIOR: %d", maior);
}//fim maior_num

void menor_num(int num[]){
    int menor = num[0];
    int i;
    for(i = 0; i < N; i ++){
        if(num[i] < menor){
            menor = num[i];  
        } 
    }
    printf("\nMENOR: %d", menor);
}//fim menor_num

void main(){
    int num[N];
    int i;
    float media;

    printf("Digite %d numeros inteiros:\n",N);

    for(i = 0; i < N; i ++){
        printf("Numero %d: ",i + 1);
        scanf("%d",&num[i]);
    }

    media = media_num(num); 

    printf("\nMEDIA: %.2f",media);
    maior_num(num);
    menor_num(num);

}//fim do main