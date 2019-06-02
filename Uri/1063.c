#include <stdio.h>

typedef struct estacao{
		char vagoes[26];
		int qtElementos;
}estacao;
	
	
	void retirarEspacosV(char *palavra, int * tam){
		char aux[26];
		char aux2[26];
		int tamanho = 0, c = 0, i = 0, j = 0, k = 0;
		
		fflush(stdin);
		gets(aux);
		while(aux[tamanho] != '\0') tamanho++;		
		while(i < tamanho){
			aux2[c] = aux[i];
			c++;
			i+=2;	
		}
		j = c - 1;
		while(j >= 0){
			palavra[k] = aux2[j];
			k++;
			j--;
		}
		*tam = c - 1;		
	}
	
	void retirarEspacos(char *palavra){
		char aux[52];
		int tamanho = 0, c = 0, i = 0, j = 0, k = 0;
		
		fflush(stdin);
		gets(aux);
		while(aux[tamanho] != '\0') tamanho++;		
		while(i < tamanho){
			palavra[c] = aux[i];
			c++;
			i+=2;	
		}
	}
			
	void pop(estacao *E, estacao *S){
		S->vagoes[S->qtElementos + 1] = E->vagoes[E->qtElementos];
		E->qtElementos--;
		S->qtElementos++;
	}
	
	main(){
		int cont = 0;
		int t = 0;
		int res;
		char organizacao[26];
		estacao estacaoA, estacao, estacaoB;
		estacao.qtElementos = -1;
		estacaoA.qtElementos = -1;
		estacaoB.qtElementos = -1;
		int j = 0;
		int i = 0;
		int k = 0;
		
		scanf("%d", &res);
		while(res != 0){
			fflush(stdin);
			retirarEspacosV(estacaoA.vagoes, &estacaoA.qtElementos);
			retirarEspacos(organizacao);
			
			
			while(estacaoA.qtElementos != -1){
				while(estacaoA.vagoes[estacaoA.qtElementos] != organizacao[j] && estacaoA.qtElementos != -1){
					pop(&estacaoA, &estacao);
					printf("I");
				}
	
				if(estacaoA.qtElementos != -1 && estacaoA.vagoes[estacaoA.qtElementos] == organizacao[j]){
					pop(&estacaoA, &estacao);
					printf("I");
				}
	
				if(estacaoA.qtElementos != -1 && estacao.vagoes[estacao.qtElementos] == organizacao[j]){
					pop(&estacao, &estacaoB);
					printf("R");
				}
				else{
				     while(estacao.vagoes[estacao.qtElementos] == organizacao[j]){
						j++;
						pop(&estacao, &estacaoB);
						printf("R");
					 }
				    }
				j++;
			}
			
			if(j < res) printf(" Impossible");
			printf("\n");
			estacao.qtElementos = -1;
			estacaoA.qtElementos = -1;
			estacaoB.qtElementos = -1;
			j = 0;
			scanf("%d", &res);
		  }
	}