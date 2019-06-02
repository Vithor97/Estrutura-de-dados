#include <stdio.h>
#include <stdlib.h>

void gera(int n){
	int v[n];
	int i;
	for(i=1;i<=n;i++){
		v[i] = 1 + rand() %6;
		printf("\tpos[%2d] - face: %d\n", i, v[i]);
	}
	
	
}


int main(){
	
	int n = 6000;
	srand(time(0));
	
	printf("lancameto de dados\n");
	
	gera(n);
		
	return 0;
}
