#include<stdio.h>
#include<string.h>

#define MAXIMO 10

typedef struct{
    int id;
    char descricao[100];
    float preco;
    int estoque;
}Produto;

typedef struct{
    Produto produtos[MAXIMO];
    int n;
}Lista;

Lista cadastrar(Lista, Produto);
void imprimir(Lista);
int getProduto(Lista lista, int id);
Lista remover(Lista lista, int id);

void main(){
    Lista loja;
    loja.n = 0;

    Produto p1;
    strcpy(p1.descricao, "mouse");
    p1.estoque = 10;
    p1.preco = 10.5;

    Produto p2;
    strcpy(p2.descricao, "Teclado");
    p2.estoque = 12;
    p2.preco = 25;

    Produto p3;
    strcpy(p3.descricao, "Mouse sem Fio");
    p3.estoque = 5;
    p3.preco = 50;

    loja = cadastrar(loja, p1);
    loja = cadastrar(loja, p2);
    loja = cadastrar(loja, p3);

    imprimir(loja);
}

Lista cadastrar(Lista lista, Produto p){
    if(lista.n < MAXIMO){
        lista.produtos[lista.n] = p;
        if(lista.n == 0){
            lista.produtos[lista.n].id = 1;
        }else{
            lista.produtos[lista.n].id =
            lista.produtos[lista.n - 1].id + 1;
        }
        lista.n++;

    }else{
        printf("Lista lotada!");
    }
    return lista;
}

void imprimir(Lista lista){
    int i=0;
    printf("---------------PRODUTOS-------------------\n");
    for(i=0;i<lista.n;i++){
        printf("ID: %d\n", lista.produtos[i].id);
        printf("DESCRICAO: %s\n", lista.produtos[i].descricao);
        printf("PRECO: %.2f\n", lista.produtos[i].preco);
        printf("ESTOQUE: %d\n", lista.produtos[i].estoque);
        printf("-----------------------------------------\n");
    }
}

/*Produto getProduto(Lista lista, int id){
    int i = 0;
    Produto p;
    p.id = 0;

    printf("----------------BUSCAR-------------------\n");
    for(i = 0;i<lista.n;i++){
        if(lista.produtos[i].id == id){
            return lista.produtos[i];
        }     
    }
    return p;    
}//fim getProduto
*/

int getProduto(Lista lista, int id){
    int i;
    for(i = 0;i<lista.n;i++){
        if(lista.produtos[i].id == id){
            return i;
        }     
    }
    return -1;    
}//fim getProduto

Lista remover(Lista lista, int id){
    int i;
    int buscar_p = getProduto(lista,id);
    if(buscar_p < 0){
        return lista;
    }
    for(i = buscar_p;i<lista.n-1;i++){
        lista.produtos[i] = lista.produtos[i+1];
    }
    lista.n--;
    return lista;
}