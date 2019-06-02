#include "lista.h"

void inicia_lista(struct lista * l){
        l->primeiro = NULL;
}

int lista_vazia(struct lista * l){
    if(l->primeiro == NULL){
        return 1;
    }
    return 0;
    //return !l->primeiro;
}

int insere_inicio(int i, struct lista *l){
    No * novo = cria_no(i);
    if(novo != NULL){
	printf("Endereco de NO: %d\n", novo);
    if(!lista_vazia(l)){
    printf("Endereco de PROXIMO: %d\n", l->primeiro);
        novo->proximo = l->primeiro;
    //printf("No if Valor de l->primeiro->info :%d\n",l->primeiro->info );    
    //printf("valor dentro do if(!lista_vazia(l)): %d\n",novo->info);
    }
    printf("Passou aqui primeiro\n\n");
    l->primeiro = novo;
    printf("\tValor de l->primeiro->info :%d\t\n",l->primeiro->info );
    printf("Endereco PRIMEIRO: %d\n", l->primeiro->proximo);
    return 1;

    }
}

void mostra_lista(struct lista * l, char * msg){
    No * aux;
    printf("\n%s\n", msg);
    if(lista_vazia(l)){
        printf("lista vazia\n");
    }
    else{
        aux = l->primeiro;
        while(aux != NULL){
            printf("%d ", aux->info);
            aux = aux->proximo;
        }
    }
}

int insere_fim(int i, struct lista* l){
    No* aux, *novo;
    novo = cria_no(i);
    if(novo){//if novo!= null
        if(lista_vazia(l)){
            l->primeiro = novo;
        }
        else{
            aux = l->primeiro;
            
            while(aux->proximo != NULL){
                aux = aux->proximo;
                printf("\n\nValor do aux->info: %d\n\n", aux->info);
            }
            aux->proximo = novo;
        }
        return 1;
    }

}

int remove_inicio(int * i, struct lista *l){
    No * aux;
    if(lista_vazia(l)){
        return 0;
    }
    aux =l->primeiro;
    *i = aux->info;
    l->primeiro= l->primeiro->proximo;
    //l->primeiro = aux ->proximo
    libera_no(&aux);
    return 1;
}
int remove_fim(int *i, struct lista * l){
    No * aux;
    if(lista_vazia(l)){
        return 0;
    }
    aux = l->primeiro;
    if(l->primeiro ->proximo==NULL){
        *i = aux->info;
        l->primeiro = NULL;
        libera_no(&aux);
    }
    else{
        while (aux ->proximo->proximo !=NULL){//penultimodalista
            aux = aux->proximo;
        }
        *i= aux->proximo->info;
        libera_no(&aux->proximo);
    }
    return 1;
}

