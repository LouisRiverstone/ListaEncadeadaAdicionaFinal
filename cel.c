
#include <stdio.h>
#include <stdlib.h>

struct cel{
    int info;
    struct cel* prox;
};
typedef struct cel Celula;

Celula* cria_celula(){
    return NULL;
}


Celula* busca_ultimo(Celula* cel){
    Celula* a = cel;
    while(a->prox != NULL){
        a = a->prox;
    }
    return a;
}


Celula* busca_celula(Celula* cel,int v){
    Celula* a = cel;
    while(a!= NULL){
        if(a->info == v){
            printf("ACHOOOOU");
            return a;
        }else{
          a = a->prox;
        }
    }
    printf("NAO ACHOU ESSE LIXO DE %d",v);
    return NULL;
}


Celula* insere_celula(Celula* cel,int v){
    Celula* nova = (Celula*) malloc(sizeof(Celula));
    nova->info = v;
    nova->prox = NULL;
    if(cel != NULL){
        Celula* busca = busca_ultimo(cel);
        busca->prox = nova;
        return cel;
    }else{
        cel = nova;
        return cel;
    }



}

void imprime_celula(Celula* cel){
    Celula* p;
    for(p = cel;p!=NULL;p=p->prox){
        printf("%d\n", p->info);
    }
}

int testa_vazia(Celula* cel){
    return(cel == NULL);
}

Celula* remove_celula(Celula* cel, int v){
    Celula* a = NULL;
    Celula* p = cel;
    while(p!= NULL && p->info != v){
        a=p;
        p = p->prox;
    }
    if(p == NULL){
        return cel;
    }
    if(a == NULL){
        cel = p->prox;
    }else{
        a->prox = p->prox;
    }
    free(p);
    return cel;
}

void libera_celula(Celula* cel){
    free(cel);
}

Celula* cel_insere_ordenado(Celula* cel, int v){
    Celula* n = (Celula*) malloc(sizeof(Celula));
    Celula* a = NULL;
    Celula* p = cel;
    while(p!=NULL && p->info < v){
        a = p;
        p = p->prox;
    }
    n->info = v;
    if(a == NULL){
        n->prox = cel;
        cel = n;
    }else{
        n->prox = a->prox;
        a->prox = n;
    }
    return cel;

}


