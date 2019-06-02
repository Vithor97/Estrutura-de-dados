#include "lista.h"

void inicia_lista(struct lista * l){
	l->primeiro = NULL;
}

int lista_vazia(struct lista * l){
	if(l->primeiro == NULL){
		return 1;
	}
	return 0;
}

int insere_inicio(int i, struct lista * l){
	No * novo = cria_no(i);
	if(novo!=NULL){
		if(!lista_vazia(l)){
			novo->proximo = l->primeiro;
		}
		
		l->primeiro = novo;
	}
	return 1;
}
int insere_fim(int i, struct lista * l){
	No * aux, *novo;
	novo = cria_no(i);
	if(novo!=NULL){
		if(lista_vazia(l)){
			l->primeiro = novo;
		}
		else{
			aux = l->primeiro;
			while(aux->proximo != NULL){
				aux = aux->proximo;
			}
			aux->proximo = novo;
		}
		return 1;
	}
}

