#include <stdio.h>


int main (){
	int valor, n100, n50, n10, n1;
	scanf("%d", &valor);
	n100 = valor/100;
	//while (n100>=100){
	//n100=n100-100; 
		//}
	printf("NOTAS DE 100 = %d\n", n100);
	n50= (valor - (n100*100))/50;
	//while (n50>=50){
	//n50=n50-50; 
		//}
	printf("NOTAS DE 50 = %d\n", n50); 
	n10= (valor - (n100*100) -(n50*50))/10;
	//while (n10>=10){
	//n10=n10-10;	
		//}
	printf ("NOTAS DE 10 = %d\n", n10);
	n1= valor - (n100*100) -(n50*50) - (n10*10);
	printf("MOEDAS DE 1 = %d\n", n1);
	
return 0;	
	}
