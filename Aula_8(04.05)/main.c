#include "no.h"

void teste_no(){
	No no1,no2;
	No *pn;//ponteiro de struct de no
	
	no1.info = 10; // uso '.' para acessar elemntos de struct. '->' para ponteiro
	no1.proximo = NULL;
	no2.info = 20;
	no2.proximo = &no1;
	
	printf("\nendereco de no1: %p",&no1 );
	printf("\n no1.info = %d", no1.info);
	printf("\n no1.proximo = %p", no1.proximo);	
	printf("\n no2.info = %d", no2.info);
	printf("\n no2.proximo = %p", no2.proximo);
	
	no1.proximo = &no2;
	
	printf("\n no1.proximo = %p", no1.proximo);
	printf("\nendereco de no2: %p",&no2);	
	
	
	//pn->info = 98;
	
	pn = cria_no(98);
	printf("\npn.info = %d", pn->info);
	
	if(libera_no(&pn)){
		printf("\nMemoria limpa");
		printf("\n%p", pn);
	}
	/*pn = &no1;	
	libera_no(&pn);*/
	pn = &no2;
	//printf("\n quero saber valor de pn->info: %d", pn->info);
	printf("\n quero saber valor de no2.info: %d", no2.info);
	
	pn->info = 50;
	printf("\n no2.info = %d", no2.info);
	pn->proximo->info = 100;
}

int main(int argc, char *argv[]) {
	
	teste_no();
	
	return 0;
}
