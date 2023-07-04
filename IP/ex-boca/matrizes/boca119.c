#include <stdio.h>

int main(){
  int a, b, c, d;
  float det;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  det = a*d - b*c;
  printf("%.2f\n", det);
  
return 0;
}