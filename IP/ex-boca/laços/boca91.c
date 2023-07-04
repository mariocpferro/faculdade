#include <stdio.h>

int main() {
  long int n, fat=1, i;
  scanf("%ld", &n);
  for(i=n; i>0;i--)
    fat = fat*i;
  printf("%ld! = %ld\n",n,fat);
  return 0;
}