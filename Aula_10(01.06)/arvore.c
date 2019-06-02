#include "arvore.h"

Arvore * cria_arvore(){
	Arvore * a = (Arvore *) malloc (sizeof(Arvore));
	if(a){
		a->raiz = NULL;
		//printf("\n1 - cria arvore\n");
	}
	return a;
}

int arvore_vazia(Arvore * a){
	if(a->raiz == NULL){
		return 1;
	}
	
	return 0;
}

void insere_rec(No* novo, No * atual){
	if(novo->info > atual->info){
		//printf("\n2 - cria arvore\n");
		if(atual->dir ==NULL){
			atual->dir = novo;
		}
		else{
			insere_rec(novo, atual->dir);
		}
	}
	else{
		if(atual->esq ==NULL){
			atual->esq = novo;
		}
		else{
			insere_rec(novo, atual->esq);
		}
	}
}
int insere(int i, Arvore * a){
	No * novo = cria_no(i);
	if(novo){
		if(arvore_vazia(a)){
			a->raiz = novo;
		}else{
			insere_rec(novo, a->raiz);
		}
		//printf("\n1 - insere rec\n");
		return 1;
	}
	return 0;
}
void mostra_rec(No * atual){
	
	if(atual->esq){// != null
		//printf("primiro esq: %d \n", atual->info);
		mostra_rec(atual->esq);
		//printf("\n4 - mostra rec\n");	
	}
	//printf("\n1 - cria arvore\n");
	printf("%d ", atual->info);
	if(atual->dir != NULL){
		//printf(" DIR: %d \n", atual->info);
		mostra_rec(atual -> dir);
	}	
}

void mostra_em_ordem(Arvore *a){
	printf("\n");
	if(arvore_vazia(a)){
		printf("arvore vazia\n");
	}
	else{
		mostra_rec(a->raiz);
	}
	printf("\n");	
}
//MATe ------------------------------------------------------------------------------
int maiorAux(No *atual){
		if(atual->dir){ //if atual direita != NULL
			 maiorAux (atual->dir);
		}
		else{
			//printf("%d maior\n",atual->info );
			return atual->info;
		}
		
}

void maiorValor(Arvore *a){
	int i;
	if(arvore_vazia(a)){
		printf("arvore vazia\n");
	}else{
		i = maiorAux(a->raiz);
	}
	
	printf("Maior: %d\n", i);
	 
}
