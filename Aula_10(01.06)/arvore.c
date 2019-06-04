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
	//printf("a->raiz :%d \n", atual->info);
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
			//printf("a->raiz :%d \n", a->raiz->info);
			insere_rec(novo, a->raiz);
		}
		//printf("\n1 - insere rec\n");
		return 1;
	}
	return 0;
}
//------------------------------------------Mostar em ordem------------------------------------------------------------------------
void mostra_rec(No * atual){
	//printf("\n%d -  ATUAL\n",atual->info );
	if(atual->esq){// != null
		//printf("esq: %d \n", atual->info);
		mostra_rec(atual->esq);
		//printf("\n4 - mostra rec\n");	
	}
	
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
	printf("E ordem\n");
	printf("\n");	
}
//----------------------------------------------------------------------------------------------------------------

//------------------------------------------Mostar em PRE-ordem------------------------------------------------------------------------
void pre_aux(No *atual){
	printf("%d ", atual->info);
	
	if(atual->esq){
		pre_aux(atual->esq);	
	}
	if(atual->dir){
		pre_aux(atual->dir);
	}
	
}

void pre_ordem(Arvore *a){
	printf("\n");
	if(arvore_vazia(a)){
		printf("arvore vazia\n");
	}
	
	else{
		pre_aux(a->raiz);
	}	
	printf("Pre ordem\n");
}



//---------------------------------------POS-ORDEM ---------------------------------------------------------------
void pos_aux(No * atual){
	
	if(atual->esq !=NULL){
		pos_aux(atual->esq);
	}
	if(atual->dir != NULL){
		pos_aux(atual->dir);
	}
	printf("%d ",atual->info);
}

void pos_ordem(Arvore *a){
	printf("\n");
	if(arvore_vazia(a)){
		printf("Arvore vazia");
	}
	
	else{
		pos_aux(a->raiz);
	}
	printf("Pos ordem\n");
}


//---------------------------------------------------------------------------------------------------------------------------------------------

//MATE------------------------------------------------------------------------------
// --------------------------------------------- MAIOR ELEMETO DO NO -----------------------------------------------------------------------------
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

//---------------------------------------------------------------------------------------------------------------------------------------------


//------------------------------------------------------------contar o numero de nos-----------------------------------------------------------
int verNos(Arvore *a){
	if(arvore_vazia(a)){
		return 0;
	}
	return nosAux(a->raiz);
}

int nosAux(No *atual){
	int i =0;
		if(atual){ 
			//return nosAux (atual->esq) + 1 + nosAux (atual->dir);
			//i++;
			return nosAux(atual->dir) + 1 + nosAux (atual->esq);
		}
		return 0;
}
//---------------------------------------------------------------------------------------------------------------------------------------------

