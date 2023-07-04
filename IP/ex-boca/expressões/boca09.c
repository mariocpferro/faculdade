#include <stdio.h>


int main(){
  int h, m, s, ress;
  scanf("%d %d %d", &h, &m, &s);
  ress= h*3600 + m*60 + s;
  printf("O TEMPO EM SEGUNDOS E = %d\n", ress);

return 0;
  }
