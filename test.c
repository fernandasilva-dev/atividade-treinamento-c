#include <stdio.h>

void main() {
    int i, j, n_linhas;
    printf("Digite o nummero de linhas da Arvore: ");
    scanf("%d",&n_linhas);
    printf("\n");

    for(i = 0; i < n_linhas; i ++){
        for(j = 0; j < n_linhas - i; j++){
            printf(" ");
        }
        for(j = 0; j < 2*i; j++){
            printf("^");
        }
        for(j = 0; j < n_linhas - i; j++){
            printf(" ");
        }
        printf("\n");
    }
    for(i = 0; i < n_linhas-1;i++){
            printf(" ");
        }
    printf("||\n");
    system("Pause");
}//fim main
