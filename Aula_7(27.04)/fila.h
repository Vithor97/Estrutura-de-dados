#include <stdio.h>
#include <stdlib.h>
	
struct fila{
	int *dados;
	int prim, ult, cont, capacidade;
};

	typedef struct fila Fila; 
	//ponteiro de Fila
	Fila * cria_fila (int);

	int fila_cheia (Fila *);
	int fila_vazia (Fila *);

	int insere_fila(int, Fila *);
	int remove_fila(int *, Fila *);

	int ocupacao_fila(Fila *);

	void mostra_fila(Fila *);
	void mostra_vetor(Fila *);

