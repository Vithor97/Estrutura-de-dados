#include "no.h"

typedef struct {
	No* raiz;
}Arvore;

Arvore * cria_arvore();

int insere(int, Arvore *);

int arvore_vazia(Arvore *);

void mostra_em_ordem(Arvore *);


void maiorValor(Arvore *);

void menorValor(Arvore *);


int verNos(Arvore *);

void pre_ordem(Arvore *);

void pos_ordem(Arvore *);

int altura(Arvore *);

int folha(Arvore *);

int pares(Arvore *);
