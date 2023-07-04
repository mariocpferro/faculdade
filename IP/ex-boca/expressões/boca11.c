#include <stdio.h>
#include <math.h>
 
 
 int main () {
	float l1, l2, l3, area, media;
	scanf("%f %f %f", &l1, &l2, &l3);
	media= ( l1+ l2 + l3)/2;
	area= media*(media - l1)*(media - l2)*(media-l3);
	printf("A AREA DO TRIANGULO E = %.2f\n", sqrt(area));
	
	 
	 
	  }
