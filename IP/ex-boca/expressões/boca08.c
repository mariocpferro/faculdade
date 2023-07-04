#include <stdio.h>
#include <math.h>

int main(){
  float h, a, ar;
  scanf("%f %f", &h, &a);
  ar=h*3*a*a* sqrt(3) /6;
  printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", ar);

return 0;
}
