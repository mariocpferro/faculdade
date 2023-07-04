#include <stdio.h>
#include <stdlib.h>


int main(){
  float a, b, c, d, deter;
  scanf("%f %f %f %f", &a, &b, &c, &d);
  deter= a*d - b*c;
  printf ("O VALOR DO DETERMINANTE E = %.2f\n", deter);

 return 0;
}
