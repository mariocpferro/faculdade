#include <stdio.h>

int main() {
  int A, B, anos;
  scanf("%d", &A);
  scanf("%d", &B);
  anos = 0;
  while(A<B) {
    A = A*1.03;
    B = B*1.015;
    anos = anos+1;
  }
  printf("ANOS = %d",anos);

return 0;
}