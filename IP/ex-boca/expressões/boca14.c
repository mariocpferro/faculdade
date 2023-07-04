#include <stdio.h>
#include <math.h>


int main (){
  float x1, x2, y1, y2, q1, q2, d;
  scanf ("%f %f %f %f", &x1, &y1, &x2, &y2);
  q1= pow((x2-x1),2);
  q2= pow((y2-y1),2);
  d= sqrt(q1+q2);
  printf("A DISTANCIA ENTRE A e B = %.2f\n", d);
	
	
	
	
	
return 0;	
	}

