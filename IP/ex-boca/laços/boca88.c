#include <stdio.h>

int main () {
	int n;
	double soma, i;
	scanf("%d", &n);
	i = 1;
	soma = 0;
	if(n>1){
		while(i<=n){
			soma = soma + (1/i);
			i++;
		}
	}
	printf("%lf\n", soma);
	return 0;
	}
