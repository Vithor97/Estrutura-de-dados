#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct pilha {
	int * dados;// vetor de dados
	int topo;	//indicador de top(1a posicao disponivel)
	int capacidade; //tamanho do vetor escolhido pelo usuario 
};


struct pilha * inicia_pilha(int capacidade){
	struct pilha * p;
	p = (struct pilha *) malloc (sizeof(struct pilha));
	if(p){
		p->dados=(int *) malloc (capacidade* sizeof(int));
		if(p->dados){
			p->topo = 0;
			p->capacidade = capacidade;
		}
		else{
			return NULL;
		}
		return p;
	}
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

int pop (int* i, struct pilha *p){ 
	if(pilha_cheia(p)){//se estiver cheia
		return 0;
	}
	p->topo--;
	*i = p->dados[p->topo];
	printf("%d foi removido", i);
	return 1;	
}


int n_push(int elemento, int nElementos, struct pilha * p){
	int j;
	if(pilha_cheia(p)){
		return 0;
	}
	for(j = 0;j<nElementos;j++){
		p->dados[p->topo] = elemento;
		p->topo++;
	}
	return 1;
}
//FUNCAO que desempilha n elementos da pilha
int n_pop (int n, int *i, struct pilha *p){
	int j;
	if(pilha_cheia(p)){//se estiver cheia
		return 0;
	}
	for(j=n;j>0; j--){
		printf("%d foi removido\n", p->dados[p->topo-1]);
		p->topo--;
		*i = p->dados[p->topo];
	}
	return 1;	
}
//---------------------------(n_pop--V2)-----------------------------------
int n2_pop(int n, int *i, struct pilha *p){
	int j;
	if(pilha_cheia(p)){//se estiver cheia
		return 0;
	}
	for(j=n;j>0; j--){
		printf("%d foi removido\n", p->dados[p->topo-1]);
		pop(&i, p);	
	}
	return 1;
}
//-------------------------------------------------------------------------
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

int limpa_x(struct pilha * p, int x){
	int i, cont = 0;
	struct pilha * aux = inicia_pilha(p->topo);
	//printf("\nCapacidade da pilha: %d\n", p->topo);
	if(pilha_vazia(p)){
		return 0;
	}
	
	while (!pilha_vazia(p)){
			pop(&i, p);
		if(i!=x){
			push(i, aux);
		}
		else{
			cont++;
		}
	}
	while (!pilha_vazia(aux)){
		pop(&i, aux);
		push(i, p);
	}
	if(!cont){
		return 0;
	}
	return 1;	
}

void mostra(struct pilha * p){
	int i;
	
	for(i=p->topo-1;i>=0;i--){
		printf("%d \n", p->dados[i]);
	}
}

int main(){
	
	
	int capacidade, capacidade2;
	int elemento, nElement;
	
	int i, j=0;
	
	printf("\ndigite a capacidade do vetor 1 da estrutura\n");
	scanf("%d", &capacidade);
	
	/*printf("\ndigite a capacidade do vetor 2 da estrutura\n");
	scanf("%d", &capacidade2);*/
	
	//printf("Valor da capacidade: %d\n", capacidade);
	
	struct pilha * p1 = inicia_pilha(capacidade);
	
	for(i=1;i<=capacidade;i++){
		push(rand() %10 ,p1);
	}
	
	mostra(p1);
	printf("\n");
	printf("\n");
	
	n2_pop(1,&i,p1);
	
	printf("\n %d foi removido\n", i);
	
	mostra(p1);
	
	
	//limpa_x(p1, 4);
	
	//struct pilha * p2 = inicia_pilha(capacidade2);
	
	//printf("Capacidade da pilha %d\n", p1->capacidade);
	
	
	/*printf("valor para inserir no vetor\n");
	scanf("%d",&elemento);
	printf("numero de vezes que será inserido\n");
	scanf("%d", &nElement);*/
	
	//compara_elemento_pilha(p1,p2);
	
	//push(12,p1);
	//push(211,p1);
	
	//printf("v[0] = %d\n", p1->dados[0]);
	//printf("v[1] = %d\n", p1->dados[1]);
	printf("\n");
	
	//n_push(elemento,nElement, p1 );
	//mostra(p1);
	
		
	return 0;
	
}
