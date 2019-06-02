//MAIN.C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pilha.h"


int main(int argc, char *argv[]) {
	
	int capacidade, capacidade2;
	
	printf("Qual a capacidade do vetor:\n ");
	scanf("%d", &capacidade);
	
	printf("Qual a capacidade do vetor: \n");
	scanf("%d", &capacidade2);
	
	struct pilha *p  = inicia_pilha(capacidade);
	struct pilha *p2 = inicia_pilha(capacidade2);
	int i;
	
	//if(p){
		printf("\npilha criada com sucesso\n");
		srand(time(0));
		
		printf("Digite valores para o vetor da pilha 1:\n");
		while(!pilha_cheia(p)){
			scanf("%d", &i);
			push(i, p);
			
			//mostra_pilha (p);
			//printf("\ntopo da pilha 1: %d\n", p->dados[p->topo-1]);

		}
		
		printf("Digite valores para o vetor da pilha 2:\n");
		while(!pilha_cheia(p2)){
			scanf("%d", &i);
			push(i, p2);
			
			//mostra_pilha (p);
			//printf("\ntopo: %d\n", p2->dados[p2->topo-1]);
		}
		
		compara_elemento_pilha(p, p2);
		
		mostra_pilha_invertida(p);
		mostra_pilha_invertida(p2);
		
		printf("\ntopo da pilha 1: %d\n", p->dados[p->topo-1]);
		printf("topo da pilha 2: %d\n", p2->dados[p2->topo-1]);
		
		compara_pilha(p,p2);
		
		printf("\nnumero de elementos de p = %d", numero_elementos(p));

	//}
	//else{
	//	printf("\nfalha na alocacao de memoria\n");
	//}
	
	return 0;
}
