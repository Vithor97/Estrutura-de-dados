#include <stdio.h>

int busca_binaria(int x, int v[], int n, int * cont){
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

int busca_simples (int x, int v[], int n, int *cont){
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
	
	int v[40], i;
	int cont_simples = 0, cont_bin=0;
	for(i=0;i<40;i++){
		v[i]= i+1;
		
	}
	printf("\nBusca simples, Achei o 5 na posicao %d\n", busca_simples(5,v,40, &cont_simples));
	printf("\n busca simples fez %d iteracoes\n", cont_simples);
	printf("\nBusca binária, Achei o 5 na posicao %d\n", busca_binaria(5,v,40, &cont_bin));
	printf("\n busca binaria fez %d iteracoes\n", cont_bin);
	
	return 0;
}
