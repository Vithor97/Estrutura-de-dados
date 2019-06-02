#include <stdio.h>
#include<stdlib.h>

int * f1(int n){//ruim, devolve ponteiro de variavel estatica
	int v[n] , i;
	
	for(i=0;i<n;i++){
		scanf("%d", &v[i]);
	}
	return v;//ponteiro de inteiro
}
int * f2(int n){//ruim, devolve ponteiro de variavel estatica
	int i;
	int *v = (int *) malloc(n* sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d", &v[i]);
	}
	return v;//ponteiro de inteiro
}

int main (){
	int * v1;
	//v1 =f1(4);
	v1=f2(4);
	printf("%d",*v1);
	
	return 0;
}
