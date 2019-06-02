#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct vetor_magico{
	int tamanho, ocupacao;//tamanho 4 em cada var
	char *palavra; //vetor dinamico, tamanho 8
	
};

struct vetor_magico * cria_vetor(int t){
	
	struct vetor_magico * p;
	
	p = (struct vetor_magico *) malloc (sizeof(struct vetor_magico));
	if( p!= NULL){
		p->palavra = (char *) malloc (100 * sizeof(char));
		if(p->palavra == NULL){//(!p->v)
			return NULL;
		}
		p->tamanho = t;
		p-> ocupacao = 0;
		
		
	}
	return p;
}

void exibe_vetor(struct vetor_magico * p){
	int i;
	printf("\nTamanho atual da palavra = %d, ocupcao atual = %d\n", p->tamanho , p->ocupacao);


		for(i=0;i<p->ocupacao;i++){
			printf("%d ", p->palavra[i]);
		}

	printf("\n");
}

int insere(char * palavra, struct vetor_magico * p){
	

		p->palavra[p->ocupacao++] = palavra;
		//p->v[p->ocupacao] = i;
		//p->ocupacao++;
		return 1;
}

int main(){
	
	int t;
	printf("digite o tamanho inicial do vetor: ");
	scanf("%d", &t);
	struct vetor_magico * apont;
	apont = cria_vetor(t);
	
	char fim[3]="fim";
	char palavra[100];
	int tamanho, i;
	printf("digite palavras na tela: ");
	scanf("%s",&palavra);
	
	
	while (strcmp(palavra, fim) !=0){
		printf("digite palavras na tela: ");
		scanf("%s",&palavra);
	}
	
	tamanho = strlen(palavra);
	
	printf("%s\n",palavra);
	printf("tamanho: %d\n",tamanho);
	
	
	
	
	return 0;
}
