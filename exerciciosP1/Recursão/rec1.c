#include <stdio.h>
int rec (int v[], int i) {
	int x;
	if (i == 0){
		return v[0];
	}
		x = rec (v, i-1);
		printf("\n%d\n", x);
	if (x > v[i]){
		return x;
		printf("\npassou por aqui\nO valor que passou aqui foi X = %d\n",x);
	}
	return v[i];
}

int main(){
	
	int v[] = {3,5,2,6,1};
	
	printf("\n%d\n", rec(v,4));
	
	
	
	return 0;
}
