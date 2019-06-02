#include <stdio.h>
int somaN(int n){
	int soma = 0, i = 1;
	
	while(i<=n){
		soma = soma + i;
		printf("i = %d\n", i);
		i++;
		printf("Soma = %d\n", soma);
	}
	return soma;
	
}

int main(){
	
	int n;
	
	printf("\ndigite um valor ppara a soma\n");
	scanf("%d",&n);
	
	
	printf("\n%d\n", somaN(n));
	
	return 0;
}

//sizeof(arr)/sizeof(int);
