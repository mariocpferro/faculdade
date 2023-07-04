#include <stdio.h>


int main (){
	float a,b,c,d,e,f,x,y;
	scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
	y= (a*f - d*c) / ( a*e - d*b);
	x= (f - e*y)/ d;
	printf("O VALOR DE X E = %.2f\n O VALOR DE Y E = %.2f\n", x, y);
	
	
	
	
	
	
	
	
	
	return 0;
	}
