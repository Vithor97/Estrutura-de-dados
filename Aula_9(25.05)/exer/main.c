#include "lista.h"

void teste_no(){
	No * n;
	
	n = cria_no(28);
	
	printf("Valor do no: %d", n->info);
	
}

void teste_lista(){
	
    struct lista l;
    int n;
    inicia_lista(&l);
    mostra_lista(&l, "lista foi inicializada");
    insere_inicio(10, &l);
    insere_inicio(20, &l);
    insere_inicio(30, &l);
    insere_inicio(40, &l);
    mostra_lista(&l, "lista depois das insercoes de inicio");
    insere_fim(5, &l);
    insere_fim(15, &l);
    insere_fim(25, &l);
    insere_fim(35, &l);
    mostra_lista(&l, "Lista depois das insercoes de fim");
    if(remove_inicio(&n,&l)){
        printf("\n%d foi removido do inicio\n",n);
        mostra_lista(&l, "lista depois das insercoes de fim");
    }



}

int main(int argc, char *argv[]) {
	
	//teste_lista();
	teste_no();
	return 0;
}

