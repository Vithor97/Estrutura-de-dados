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
void mostra_pilha_invertida(struct pilha *p){
	int i;	
	if(pilha_vazia(p)){
		printf("\npilha vazia");
	}
	else{
		for(i=0;i <=p->topo-1;i++){
			printf("%d  ", p->dados[i]);
		}
	}
	printf("\n");	
}

int numero_elementos(struct pilha *p ){
	int i;
	
	while(i<p->topo){
		i++;
	}
	return i;	
	
}

void compara_pilha(struct pilha * p, struct pilha * p2 ){
	
	int i=0, x = 0 ,j, cap;
	j = p->capacidade;
	printf("\nj = %d\n", j);
	int v[j], tamanhoAux;
	//printf("pilha %d \n", p->dados[0]);
	while(p->dados[i]==p2->dados[x] && i < p2->capacidade ){
		
		printf("Funciona\n");
		
		v[i] = p->dados[i];
		
		i++;
		x++;
		cap++;
		
	}
	
	printf("\ni = %d\n", i);
	printf("\ni = %d\n", i);
	
	for(i=0;i<cap; i++){
		
		printf("%d - ",v[i]);
	}
	
	if(p->dados[i]==p2->dados[i]){
		printf("\nSao iguais\n");
	}
	else{
		printf("\ndiferentes\n");
	}
	
}

int compara_elemento_pilha(struct pilha * p1, struct pilha *p2){
	int i=0, j=0;
	while (i<p1->topo){
		i++;
	}
	while (j<p2->topo){
		j++;
	}
	printf("Iqt = %d, Jqt = %d\n", i, j);
	
	if(i==j){
		printf("mesma quantidade de elementos\n");
		return 1;
	}
	else{
		printf("quantidade de elementos diferentes\n");
		return 0;
	}		
}
