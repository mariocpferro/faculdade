#include <stdio.h>


int main(){
  int n0, n1, n2, n3, res;
  scanf("%d", &n0);
  n1= n0 / 100;
  n2= (n0 % 100) / 10;
  n3= (n0 % 100) % 10;
  res = (n1 + n2*3 + n3*5) % 7;



      printf("O NOVO NUMERO E = %d%d\n", n0, res);








return 0;
}
