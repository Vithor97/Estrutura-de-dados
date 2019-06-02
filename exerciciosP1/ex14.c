/*14) Construir uma função para testar se uma pilha P1 tem mais elementos que uma pilha P2. 
Considere que P1 e P2 já existem.*/
int compara_elemento_pilha(struc pilha * p1, struct pilha *p2){
	
	int i=0, j=0;
	
	while (i<p1->topo-1){
		i++;
	}
	while (j<p2->topo-1){
		j++;
	}
	if(i==j){
		printf("mesma quantidade de elementos");
		return 1;
	}
	else{
		printf("quantidade de elementos diferentes");
		return 0;
	}
		
}
