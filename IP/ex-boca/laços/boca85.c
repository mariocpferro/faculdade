#include <stdio.h>

int main () {
	int n, quadrado, i;
	scanf("%d", &n);
	i = 2;
	if(n>5 && n<2000){
		while(i<=n){
			quadrado = i*i;
			printf("%d^2 = %d\n", i, quadrado);
			i = i+2;;
		}
	}
	return 0;
	}
