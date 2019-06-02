//Escrever uma função iterativa que calcula o n-ésimo número da série de Fibonacci.
#include<stdio.h>


int n_fib(int n){
	
	int i, v[n];
	v[1] = 0;
	v[2] = 1;
	
	if(n == 0 || n == 1){
		printf("v[%i] = %d\n", n, v[n]);	
	}
	
	printf("v[1] = %d\n", v[1]);
	printf("v[2] = %d\n", v[2]);
	
	for(i=3;i<=n;i++){
		v[i] = v[i-1] + v[i-2];
		
		printf("v[%i] = %d\n", i, v[i]);
	}
	return v[n];
	
}

int main(){
	
	int n, x = 0;
	
	printf("digite N:\n");
	scanf("%d", &n);
	
	x = n_fib(n);
	
	printf("\nEnesimo termo: %d\n",x);
	
	return 0;
}
