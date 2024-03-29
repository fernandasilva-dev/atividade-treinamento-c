#include <stdio.h>

void soma(int n1, int n2){
    float soma = 0;

    soma = n1 + n2;
    printf("\n%d + %d = %.2f\n",n1,n2,soma);
    system("Pause");

}

void main(){
    int menu, n1, n2;
    do{
        printf("=========CALCULADORA=========\n");
        printf("1 - SOMA\n");
        printf("2 - SUBTRACAO\n");
        printf("3 - MULTIPLICACAO\n");
        printf("4 - DIVISAO\n");
        printf("0 - SAIR\n");
        printf(">>> ");
        scanf("%d", &menu);

        switch (menu){
        case 1:
            system("cls");
            printf("------------SOMA------------");
            printf("\nDigite o primeiro numero: ");
            scanf("%d",&n1);
            printf("Digite o segundo numero: ");
            scanf("%d",&n2);
            soma(n1,n2);   
        case 2:
            
        case 0:
            break;
        default:
            printf("Opcao Invalida!");
        }
        system("cls");

    }while(menu != 0);

    
}//fim do main