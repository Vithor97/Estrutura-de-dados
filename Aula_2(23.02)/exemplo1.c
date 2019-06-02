#include <stdio.h>
#include<stdlib.h>

struct vetor_magico{
	int tamanho, ocupacao;//tamanho 4 em cada var
	int *v; //vetor dinamico, tamanho 8
	
};

int main(){
	struct vetor_magico vm;
	struct vetor_magico *p_vm; // ponteiro de struct
	printf("\n%d\n", sizeof (struct vetor_magico));
	printf("\n%d\n", sizeof (vm));
	printf("\n%d\n", sizeof (p_vm));// ponteiro de struct
	
	vm.tamanho = 10;
	vm.ocupacao = 0;
	vm.v = (int *) malloc (10 * sizeof(int));
	
	p_vm = (struct vetor_magico *) malloc (sizeof(struct vetor_magico));
	
	p_vm->tamanho =10;//struct que o p_vm aponta no campo tamaho
	p_vm->ocupacao =0;//struct que o p_vm aponta no campo ocupacao
	p_vm->v = (int *) malloc (10 * sizeof(int)); //struct que o p_vm aponta no campo v
	
	
	
	
	return 0;
}
