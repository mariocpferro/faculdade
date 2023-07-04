#include <stdio.h>


int main (){
	int numero, n1, n2, n3, res;
	scanf("%d", &numero);
	n1=numero/100;
	n2=(numero%100)/10;
	n3=(numero%100)%10;
	res= n3*100 + n2*10 + n1;
	printf ("%d", res);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	}
