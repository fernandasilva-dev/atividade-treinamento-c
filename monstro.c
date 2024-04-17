#include <stdio.h>

typedef struct{
	int vida_atual;
	int vidamax;
	int ataque;	
}Monstro;

Monstro atacar(Monstro atacante, Monstro atacado){
	atacado.vida_atual -= atacante.ataque;
	return atacado;
}//fim atacar

Monstro curar(Monstro monstro, int remedio){
	monstro.vida_atual += remedio;
	if(monstro.vida_atual > monstro.vidamax){
		monstro.vida_atual = monstro.vidamax;
	}
	return monstro;
}//fim curar

void main(){
	Monstro dragao = {3000,3000,1200};
	Monstro cavaleiro = {2000,2000,600};
	
	cavaleiro = atacar(dragao, cavaleiro);
	printf("VIDA CAVALEIRO: %d", cavaleiro.vida_atual);
	
	cavaleiro = curar(cavaleiro,500);
	printf("\nVIDA CAVALEIRO: %d", cavaleiro.vida_atual);
}//fim main