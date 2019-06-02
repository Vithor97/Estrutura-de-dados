#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche_vetor(int *v, int n){
	int i;
	for(i=0;i<n;i++){
		v[i] = rand() % 100;
	}
}

void mostra_vetor(int *v, int n, char *msg){
	int i;
	printf("\n%s\n", msg);
	for(i=0; i<n; i++){
		printf("%d ", v[i]);
	}
	printf("\n");
}

void bubble (int *v, int n){
	int i, j, aux;
	for(i=1; i<n; i++){
		for(j=0; j<n-i; j++){
			if(v[j]> v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
				
			}
		}
	}
	
}
void insertion(int *v, int n){
	int i, j , chave;
	for(i=1; i<n; i++){
		chave = v[i];
		j= i-1;
		while (j>=0 && v[j]> chave){
			v[j+1] = v[j];//v[j--]
			j--;
		}
		v[j+1] = chave;
	}
}

int busca_binaria(int x, int *v, int n, int * cont){
	int ini=0, fim=n-1, meio;
	while(ini <= fim){
		*cont = *cont+1;
		meio = (ini + fim) / 2;
		if(x == v[meio])
			return meio;
		*cont = *cont+1;
		if(x > v[meio])
			ini = meio + 1;	
		else 
			fim = meio - 1;
	}
	return -1;	
}

int busca_simples (int x, int *v, int n, int *cont){
	int i;
	for(i=0; i<n; i++){
		*cont = *cont+1;
		if(x == v[i]){
			return i;
		}
	}
	return -1;
}

int main(){
	srand(time(0));
	
	int *v, n;
	int i=1;
	int x;
	time_t ini, fim;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	
	while (i<=15){
	
	
	int cont_simples = 0;
	printf("\t\n------------------------Rodada: %d ------------------------------\n\t",i);
	
	v = (int *) malloc (n * sizeof(int));
	
	x = rand() % 100;
	
	printf("numero para achar no vetor: %d \n ", x);
	

		
		
		if(v){
			preenche_vetor(v,n);
			mostra_vetor(v,n, "vetor 1");
			ini = time(0);
			bubble(v,n);
			fim = time(0);
			//printf("\nbubble demorou demorou %d segundos\n", fim-ini);
			
			mostra_vetor(v,n, "Vetor ordenado - bubble");
			
			printf("\nBusca simples, Achei o %d na posicao %d\n",x, busca_simples(x,v,n, &cont_simples));
			printf("\n busca simples fez %d iteracoes\n", cont_simples);
			
		
		//----------------------------------------------------Insertion-----------------------------------------------------------------//	
			//preenche_vetor(v,n);
			
			//printf("Valores ordenados:\n");
			//preenche_vetor(v,n);
			//mostra_vetor(v,n, "vetor 2");
			//ini = time(0);
			//insertion(v, n);
			//fim = time(0);
			//printf("\nInsertion demorou demorou %d segundos\n", fim-ini);
			//mostra_vetor(v,n, "Vetor ordenado - insertion");
		//-----------------------------------------------------------------------------------------------------------------------------//
	
	}
	i++;
}
	return 0;
}
