//Escrever uma função recursiva que calcula o n-ésimo termo da seguinte série, começando em zero. 0, 2, 4, 6, 8, 10 ...
#include <stdio.h>
int nEsimo(int n){
	int r = 2, an = 0,i;
	
	for(i=0; i<n-1;i++){
		an = an + r;
	}
	return an;
	
	
}

int main(){
	
	int n, i;
	
	printf("\ndigite um valor n: ");
	scanf("%d",&n);
	
	printf("\n%d\n", nEsimo(n));
	
	return 0;
}
