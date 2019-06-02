#include <stdio.h>
#include<stdlib.h>

struct vetor_magico{
	int tamanho, ocupacao;//tamanho 4 em cada var
	int *v; //vetor dinamico, tamanho 8
	
};

struct vetor_magico * cria_vetor(int t){
	
	struct vetor_magico * p;
	
	p = (struct vetor_magico *) malloc (sizeof(struct vetor_magico));
	if( p!= NULL){
		p->v = (int *) malloc (t * sizeof(int));
		if(p->v == NULL){//(!p->v)
			return NULL;
		}
		p->tamanho = t;
		p-> ocupacao = 0;
		
		
	}
	return p;
}

struct vetor_magico * libera(struct vetor_magico *p){
	free(p->v);
	free(p);
	
	return NULL;
}

int esta_cheio(struct vetor_magico * p){
	//return p->tamanho == p->ocupacao;
	
	if(p->tamanho == p->ocupacao){
		return 1;
	}
	return 0;
}

int esta_vazio(struct vetor_magico * p){
	//return !p->ocupacao==0; 
	
	if(p->ocupacao == 0){
		return 1;
	}
	else{
		return 0;
	}
		 
}
int insere(int i, struct vetor_magico * p){
	int * aux;
	int j;
	
	if(esta_cheio(p)){// precisa aumentar
		aux = (int *) malloc (2 *p->tamanho * sizeof(int));
	if(aux){
		
		for(j=0; j < p->ocupacao; j++)
		aux[j] = p-> v[j];
		free(p->v);
		p->v =aux;
		p->tamanho = 2 * p-> tamanho;
	}
	else{
		return 0;
	}
		
	}
		//p->v[p->ocupacao++] = i;
		p->v[p->ocupacao] = i;
		p->ocupacao++;
}

int main(){
	int t;
	printf("digite o tamanho inicial do vetor: ");
	scanf("%d", &t);
	struct vetor_magico * apont;
	apont = cria_vetor(t);
	
	if(apont == NULL){//(!apont)
		printf("Falha na alocacao da estrurura\n");
	}
	else{
		printf("Sucesso!");
		
		insere(2, apont);
		printf("Sucesso2!");
		apont = libera(apont);
	}
	
	return 0;
}
