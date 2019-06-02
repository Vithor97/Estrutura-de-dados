#include <stdio.h>
#include <stdlib.h>

struct vetor_magico{
	int tamanho, ocupacao;
	int * v;
};

struct vetor_magico * cria_vetor(int t){
	
	struct vetor_magico * p;
	
	p = (struct vetor_magico *) malloc (sizeof(struct vetor_magico));
	
	if(p!= NULL){
		printf("Nao eh nulo\n");
		p->v =(int *) malloc (t *sizeof(int));
		if(p->v == NULL){
			printf("V eh NULO\n");
			return NULL;
		}
		p->tamanho = t;
		p->ocupacao = 0;
		
		printf("\n\tO vetor magico foi criado com sucesso\t\n");
	}
	
	return p;
	
}

int esta_cheio(struct vetor_magico *p){
	
	if(p->tamanho == p->ocupacao){
		return 1;
	}
	return 0;
}

int redimensiona (int novo_tamanho, struct vetor_magico * p){
	int j, *aux;
	aux = (int *) malloc (novo_tamanho * sizeof(int));
	if(!aux)
			return 0;
	for(j=0; j < p->ocupacao;j++)
		aux[j] = p->v[j];
	free(p->v);
	p->v =aux;
	p-> tamanho = novo_tamanho;
		
	return 1;
}

int insere(int i, struct vetor_magico * p){
	
	if(esta_cheio(p)){// precisa aumentar
		if(!redimensiona(2 * p-> tamanho , p))
			return 0;
	}
	
	p->v[p->ocupacao++] = i;
	
	return 1;
	
}

void mosta_vetor(struct vetor_magico * p){
	int i;
	printf("\nTamanho atual = %d, ocupacao atual = %d\n", p->tamanho, p->ocupacao);
	
	for(i=0;i<p->ocupacao;i++){
		printf("%d ", p->v[i]);
	}
	printf("\n");
}

int main(){
	int t;
	int valores;
	
	printf("digite o tamanho do vetor:");
	scanf("%d",&t);
	
	struct vetor_magico * apont;
	
	apont = cria_vetor(t);
	
	if(apont ==NULL){
		printf("Falha na alocacao da estutura\n");
	}
	else{
		
		printf("digite os valores para inserir no vetor:\n");
		
		while(valores != -1){
			printf("Valor: ");
			scanf("%d", &valores);
			if(valores == -1){
				mosta_vetor(apont);
			}
			else{
				insere(valores,apont);
				mosta_vetor(apont);	
			}
		}
		
	
		
	}

	
	
	return 0;
}

