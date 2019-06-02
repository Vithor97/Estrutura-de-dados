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
		printf("Não eh nulo\n");
		p->v = (int *) malloc (t * sizeof(int));
		if(p->v == NULL){//(!p->v)
			printf("Nulo\n");
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
		//p->v[p->ocupacao] = i;
		//p->ocupacao++;
		return 1;
}

void exibe_vetor(struct vetor_magico * p){
	int i;
	printf("\nTamanho atual = %d, ocupcao atual = %d\n", p->tamanho , p->ocupacao);
	if(esta_vazio(p)){
		printf("vetor vazio");
	}
	else{
		for(i=0;i<p->ocupacao;i++){
			printf("%d ", p->v[i]);
		}
	}
	printf("\n");
}

int remov (int *i, struct vetor_magico *p){ //* passa o ponteiro vai devolver pra quem chamou	
	if(esta_vazio(p)){
		return 0;
	}
		
	*i = p->v[--p->ocupacao]; //elemento que o i aponta
	if(p->ocupacao <= p->tamanho/4)//precisa diminuir
		if(!redimensiona (p ->tamanho /2 , p))
			return 0;
			
	return 1;
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
		
		for (t=1;t<=42;t++){
			if(insere(t, apont)){
				exibe_vetor(apont);
			}
			else{
				printf("falha na alocacao !!!");
			}	
		}
		/*while(remov(&t , apont)){
			printf("\n%d foi removido", t);
			exibe_vetor(apont);
		}*/
		apont = libera(apont);
	}
	
	return 0;
}
