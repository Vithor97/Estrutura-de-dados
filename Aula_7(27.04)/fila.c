#include <stdio.h>
#include <stdlib.h>

#include "fila.h"

struct Fila{
	int *dados;
	int prim, ult, cont, capacidade;
};

struct fila * cria_fila (int capacidade){
	Fila * f;
	f = (Fila *) malloc (sizeof(Fila));
	if(f){
	//tentar alocar vetor de dados
			f->dados = (int *) malloc (capacidade * sizeof(int));
			if(!f->dados){
				free(f);
				return NULL;
			}
			f->prim = f-> ult = f-> cont =0;
			f->capacidade = capacidade;
		}
	return f;
}

int fila_cheia (Fila *f){
	return f->cont == f->capacidade;
}

int fila_vazia (Fila *f){
	return !f->cont;
}

int proxima(int pos, Fila *f){
	return (pos+1)%f->capacidade;
}

int insere_fila(int ins, Fila *f){
	//int ins;
	if(fila_cheia(f)){
		return 0;
	}
	f->dados[f->ult]=ins;
	printf("\nValor inserido: %d\n",f->dados[f->ult] );
	f->ult = proxima(f->ult, f);
	printf("\nRodada: %d\n", f->ult);
	f->cont++;
	
	return 1;
}

int remove_fila(int *i, Fila *f){
	if(fila_vazia(f)){
		return 0;
	}
	*i = f->dados[f->prim];
	f->prim=proxima(f->prim,f);
	f->cont--;
	return 1;
}

int ocupacao_fila(Fila *f){
	return f->cont;
}

void mostra_fila(Fila *f){
	int i;
	printf("\n");
	if(fila_vazia(f)){
		printf("fila vazia");
	}
	else{
		for(i=f->prim; i!=f->ult; i=proxima(i,f)){
			printf("%d ",f->dados[i]);
		}
	}
}

void mostra_vetor(Fila *f){
	
	int i;
	printf("\n");
	if(f->prim < f->ult){
		printf("f->prim:%d \n", f->prim );
		printf("f->ult:%d \n", f->ult );
		printf("\nprimeiro if\n");
		for(i=0; i<f->prim; i++){
			printf("_ ");
		}
		for(i=f->prim; i<f->ult; i++){
			printf("%d ", f->dados[i]);
		}
		for(f->ult; i<f->capacidade; i++){
			printf("_ ");
		}
	}
	else{
		printf("\nsegundo if\n");
		for(i=0; i<f->ult; i++)
			printf("%d ",f->dados[i]);
		for(i=f->ult; i<f->prim; i++){
			printf("_ ");
		for(f->prim; i<f->capacidade; i++)
			printf("%d ",f->dados[i]);
	}
	printf("\n");
}
}
