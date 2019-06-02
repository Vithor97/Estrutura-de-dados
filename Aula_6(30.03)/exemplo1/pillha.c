//pilha.c
#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

struct pilha *inicia_pilha(int capacidade){
	struct pilha *p;
	p=(struct pilha *) malloc (sizeof(struct pilha));//quero uma estrutura apenas
	if(p){
		p->dados = (int *) malloc (capacidade *sizeof(int));
		if(p->dados){
			p->topo = 0;
			p->capacidade = capacidade;
		}
		else{
			return NULL;
		}
	}
	return p;
}

int pilha_cheia(struct pilha *p){
	return (p->topo == p->capacidade);
	//return 1;
	//return 0;
}
int pilha_vazia(struct pilha *p){
	//return !p->topo
	if(p->topo == 0){
		return 1;
	}
	return 0;
}

int push (int i, struct pilha* p){
	
	if(pilha_cheia(p)){//se estiver cheia
		return 0;
	}
	//se nao
	p->dados[p->topo] = i;
	p->topo++;
	
	return 1;
	
}

int pop (int *i, struct pilha *p){
	if(pilha_cheia(p)){//se estiver cheia
		return 0;
	}
	p->topo--;
	*i = p->dados[p->topo];
	return 1;
	
}

int consulta_topo(struct pilha *p){
	return p->dados[p->topo-1];
}

void mostra_pilha (struct pilha *p){
	int i;
	if(pilha_vazia(p)){
		printf("\npilha vazia");
	}
	else{
		for(i=p->topo-1;i>=0;i--){
			printf("%d  ", p->dados[i]);
		}
	}
	printf("\n");
	
}
