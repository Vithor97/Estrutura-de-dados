#include "no.h"


No * cria_no(int i){
	No * pn = (No *) malloc (sizeof(No));
	if(pn){
		pn-> info = i;
		pn->proximo = NULL;
	}
	return pn;
}

int libera_no(No **pn){//guarda endereço de endereco de ponteiro
	if(*pn){
		free(*pn);
		*pn = NULL;
		return 1;
	}
	return 0;
}
