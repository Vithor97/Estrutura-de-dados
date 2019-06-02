#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche_vetor(int *v, int n){
	int i;
	for(i=0;i<n;i++){
		v[i] = rand();
	}
}

void mostra_vetor(int *v, int n){
	int i;
	printf("\n");
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

int main(){
	srand(time(0));
	
	int *v, n;
	time_t ini, fim;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	v = (int *) malloc (n * sizeof(int));
	
	if(v){// if (v != NULL)
		//printf("Valores desordenados:\n");
		preenche_vetor(v,n);
		mostra_vetor(v,n);
		//printf("Valores ordenados:\n");
		ini = time(0);
		bubble(v,n);
		fim = time(0);
		printf("\nbubble demorou demorou %d segundos\n", fim-ini);
		mostra_vetor(v,n);
		
		
	}
	
	
	return 0;
}
