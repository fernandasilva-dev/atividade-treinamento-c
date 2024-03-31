#include <stdio.h>

void main(){
    char nome;
    int rodadas,i,sua_jogada,computador;

    printf("\n==============JOGO==============\n");
    printf("1 - PEDRA\n2 - PAPEL\n3 - TESOURA");
    printf("Seu nome: ");
    gets(nome);

    printf("\nQuantidade de rodadas: ");
    scanf("%d", &rodadas);

    for(i = 1; i = rodadas; i++){
        printf("\n==============JOGO==============\n");
        printf("1 - PEDRA\n2 - PAPEL\n3 - TESOURA");
        printf("\n\n--------- Rodada %d ---------",i);
        printf("\n>>> ");
        scanf("%d", &sua_jogada); 
        computador = rand() % 3;
        if(sua_jogada = 1 && computador = 1){
            printf("\n%c = PEDRA",nome);
            printf("\nComputador = PEDRA");
            printf("EMPATE!!!");
        }
        
        printf("\nJ")
    }
    

}//fim main