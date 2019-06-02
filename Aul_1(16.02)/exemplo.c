#include <stdio.h>

int main(){
	int n=10;
	int * p;
	// p=10
	
	p=&n;
	
	printf("\nEndereco de n = %d\n" ,&n);
	
	printf("\nConteudo de p aponta = %p", p);
	printf("\nEndreco de p = %p\n" ,&p);
	printf("\nConteudo que de p aponta = %d\n" ,*p);
	
	printf("\nConteudo de n: %d\n",n);
	*p=35;//Estou alterando o conteudo do endereco que p aponta(p aponta para n)
	printf("\Conteudo que de n aponta = %d\n" ,n);
	printf("\Endereco de n = %d\n" ,&n);
	printf("\nConteudo de p aponta = %p", p);
	
	
	
	return 0;
}
