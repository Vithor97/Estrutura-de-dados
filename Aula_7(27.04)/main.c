#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	Fila *f = cria_fila(10);
	int n;
	srand(time(0));
	do{
		if(rand() % 2){
			insere_fila(rand()%10,f);
		}
		else{
			if(remove_fila(&n, f)){
				printf("\n%d saiu da fila", n);
			}
		}
		mostra_fila(f);
		if(!fila_vazia(f)) mostra_vetor(f);
	} while(!fila_vazia(f));
	return 0;
}
