#include<stdio.h>

	int main() {
		int *v1;
		int v2[10], n,i;
		printf("digite o tamanho do vetor v1: ");
		scanf("%d",&n);
		v1 = (int*) malloc (n* sizeof(int));
		printf("\n\nvetor 1 - dinamico\n");
		for(i=0;i<n;i++){
			printf("\n%p" , v1+i);
		}
		printf("\n\nvetor 2 - estatico\n");
		for(i=0;i<10;i++){
			printf("\n%p" , &v2+i);
		}
		return 0;
	}
