#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pilha.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	struct pilha *p = inicia_pilha(10);
	int i, pos, posPri;
	if(p){
		printf("\npilha criada com sucesso\n");
		srand(time(0));
		do{
			if(rand() % 2){
				push(rand() % 10, p);
			}
			/*else{
				pop(&i, p);
			}*/
			mostra_pilha(p);
			i++;
		}while (i<10);
		
		printf("I = %d\n ", i);
		
		printf("\nTopo: %d ", consulta_topo(p, &pos));
		printf("\nPosicao: %d ", pos);
		
		printf("\nprimeira numero da pilha %d\n", consulta_pri(p, &posPri));
		printf("Pos: %d\n", posPri);
		
		printf("\t\nnumero de elementos da pilha = %d\n\t",numero_elementos(p));
		
		n_pop(1,&i, p);
		printf("\nApos o n_pop\n");
		mostra_pilha(p);
		
		printf("\nTopo: %d ", consulta_topo(p, &pos));
		printf("\nPosicao: %d ", pos);
			
	}
	else{
		printf("\nfalha na alocacao de memoria\n");
	}
	
	return 0;
}
