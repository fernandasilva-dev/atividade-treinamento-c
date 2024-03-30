#include <stdio.h>

void soma(int n1, int n2){
    float soma = 0;

    soma = n1 + n2;
    printf("\n%d + %d = %.2f\n",n1,n2,soma);
    system("Pause");

}

void subtracao(int n1, int n2){
    float subtracao = 0;

    subtracao = n1 - n2;
    printf("\n%d - %d = %.2f\n",n1,n2,subtracao);
    system("Pause");

}

void multiplicacao(int n1, int n2){
    float multiplicacao = 0;

    multiplicacao = n1 * n2;
    printf("\n%d x %d = %.2f\n",n1,n2,multiplicacao);
    system("Pause");

}

void divisao(int n1, int n2){
    float divisao = 0;
    if(n2 == 0){
        printf("\nDivisao por 0 nao pode ser realizada!\n");
    }else{    
        divisao = n1 / (float)n2;
        printf("\n%d / %d = %f\n",n1,n2,divisao);
    }
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
                break;

            case 2:
                system("cls");
                printf("------------SUBTRACAO------------");
                printf("\nDigite o primeiro numero: ");
                scanf("%d",&n1);
                printf("Digite o segundo numero: ");
                scanf("%d",&n2);
                subtracao(n1,n2); 
                break;

            case 3:
                system("cls");
                printf("------------MULTIPLICACAO------------");
                printf("\nDigite o primeiro numero: ");
                scanf("%d",&n1);
                printf("Digite o segundo numero: ");
                scanf("%d",&n2);
                multiplicacao(n1,n2); 
                break;

            case 4:
                system("cls");
                printf("------------DIVISAO------------");
                printf("\nDigite o primeiro numero: ");
                scanf("%d",&n1);
                printf("Digite o segundo numero: ");
                scanf("%d",&n2);
                divisao(n1,n2); 
                break;

            case 0:
                break;
            default:
                printf("Opcao Invalida!");
                system("Pause");
            }
        system("cls");

    }while(menu != 0);


}//fim do main