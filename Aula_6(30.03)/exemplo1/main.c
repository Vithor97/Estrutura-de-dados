//MAIN.C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pilha.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	struct pilha *p = inicia_pilha(10);
	int i;
	if(p){
		printf("\npilha criada com sucesso\n");
		srand(time(0));
		do{
			if(rand() % 2){
				push(rand() % 10, p);
			}
			else{
				pop(&i, p);
			}
			mostra_pilha(p);
		}while (!pilha_vazia(p));
		
		
	}
	else{
		printf("\nfalha na alocacao de memoria\n");
	}
	
	return 0;
}
