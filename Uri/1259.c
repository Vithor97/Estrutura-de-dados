#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void mostra(int * v, int n){
	int i;
	for(i=0;i<n;i++){
		if(v[i] % 2 ==0){
			printf("%d\n" , v[i]);
		}
	}
	for(i=n;i>0;i--){
		if(v[i] % 2 !=0){
			printf("%d\n" , v[i]);
		}
	}
		
}

void escreve(int *v, int n){
	int i;
	//printf("Escreva os valores do vetor:\n");
	for(i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	
}	
	
int main() {
	
		int *v1;
		int  n;
		//printf("digite o tamanho do vetor v1: ");
		scanf("%d",&n);
		v1 = (int*) malloc (n* sizeof(int));
		escreve(v1,n);
		bubble(v1,n);
		//printf("\n");
		mostra(v1, n);
				
	return 0;
}
		
