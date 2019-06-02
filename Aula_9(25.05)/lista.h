#include "no.h"

struct lista{
    No* primeiro;
};

void inicia_lista(struct lista *);

int lista_vazia(struct lista *);

int insere_inicio(int, struct lista *);
int insere_fim(int, struct lista*);

int remove_inicio(int *, struct lista *);
int remove_fim(int *, struct lista *);

void mostra_lista(struct lista *, char *);


