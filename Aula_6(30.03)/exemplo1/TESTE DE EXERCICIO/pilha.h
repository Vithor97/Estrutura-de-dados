//pilha.h

struct pilha {
	int * dados;// vetor de dados
	int topo;	//indicador de top(1a posicao disponivel)
	int capacidade; //tamanho do vetor escolhido pelo usuario 
};

struct pilha *inicia_pilha(int);// precisa de inteiro

int pilha_cheia(struct pilha *);
int pilha_vazia(struct pilha *);


int push (int, struct pilha*);
int pop (int *, struct pilha *); //tem que ser por referencia por que vai ser removido alterado

int consulta_topo(struct pilha *);

void mostra_pilha (struct pilha *);


void compara_pilha(struct pilha * , struct pilha * );

int numero_elementos(struct pilha * );

int compara_elemento_pilha(struct pilha *, struct pilha *);
