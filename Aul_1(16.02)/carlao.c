#include<stdio.h>
int main(){
	int *v1;
	int v2[10];
	v2[0]=15;
	v2[1]=20;
	int n;
	int v;
	
	printf("digite o tamanho do vetor: ");
	scanf("%d",&n);
	
	v1= (int*) malloc(n*sizeof(int));
	
	printf("\ntamanho do n = %d",sizeof(n));
	printf("\ntamanho do v1 = %d",sizeof(v1));
	printf("\ntamanho do v2 = %d",sizeof(v2));
	
	printf("\nolha o conteudo v2 = %p\n",v2);
	
	printf("\nolha o conteudo v2 na posicao  0: %d\n",*v2);
	printf("\nolha o conteudo v2 na posicao  1: %d\n",*(v2+1));
	
	
	
	printf("\ntamanho do n = %d",n);
	
	
	return 0;
	
}
