#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

typedef struct{
	char nome[TAM];
	int idade;
	float peso;
}tipo_pessoa;

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	tipo_pessoa p = {"Teste",0,0.0};
	
	printf("\n-----------------------Início-----------------------\n");
	printf("Nome: %s\n", p.nome);
	printf("Idade: %d\n", p.idade);
	printf("Peso: %.2f\n", p.peso);
	
	printf("\nInsira o nome: ");
	scanf("%s", &p.nome);
	printf("\nInsira a idade: ");
	scanf("%d", &p.idade);
	printf("\nInsira o peso: ");
	scanf("%f", &p.peso);
	
	printf("\n-----------Alterado com os ddos do usuário-----------\n");
	printf("Nome: %s\n", p.nome);
	printf("Idade: %d\n", p.idade);
	printf("Peso: %f.2\n", p.peso);
}