#include "arvore.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*pont_no p1,p2;
	
	p1 = cria_no(10);
	p2 = cria_no(20);
	
	printf("%d\n", p1->info);
	printf("%d\n", p2->info);
	printf("\np2 antes = %p", p2);
	libera_no(&p2);
	printf("\np2 depois = %p", p2);
	
	printf("\np1 antes = %p", p1);
	p1 = libera(p1);
	printf("\np1 depois = %p", p1);
	*/
	Arvore * a = cria_arvore();
	insere(177,a);
	insere(34,a);
	insere(2,a);
	insere(5,a);
	insere(9,a);
	insere(41,a);
	insere(20,a);
	insere(11,a);
	insere(5,a);
	insere(34,a);
	insere(12,a);
	mostra_em_ordem(a);
	
	
	maiorValor(a);
	return 0;
}