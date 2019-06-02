/*Escrever uma função recursiva que calcula a soma dos elementos em dois vetores de inteiros, 
armazenando o resultado para cada posição em um terceiro vetor.*/
#include <stdio.h>
void cauculaVetor(int v1[], int v2[], int n){
	int v3[n];
	int i;
	
	for(i=0;i<n;i++){
		v3[i] = v1[i]+v2[i];
		
		printf("\t %d |", v3[i]);
	}
		
}

int main(){
	
	
	int n, i;
	
	
	printf("tamanho dos vetores: ");
	scanf("%d",&n);
	
	int v1[n], v2[n];
	
	printf("\ndigite os valores do vetor 1:\n ");
	for(i=0;i<n;i++){
		scanf("%d",&v1[i]);	
	}
	
	printf("\ndigite os valores do vetor 2:\n ");
	for(i=0;i<n;i++){
		scanf("%d",&v2[i]);	
	}
	
	cauculaVetor(v1, v2, n);
	
	return 0;
}
