#include <stdio.h>

int main() {
  int n1, n2, n3, res;  // declaração das variáveis
  /* este programa foi feito pelo aluno: mario
   * na data 25/04/2023 versão 1
   * 
   * */
  scanf("%d %d %d", &n1, &n2, &n3);
  if((n1>=0)&&(n1<10)&&(n2>=0)&&(n2<10)&&(n3>=0)&&(n3<10))
    { res = n1*100 + n2*10 + n3;
      printf("%d, %d\n", res, res*res);
    }else printf("DIGITO INVALIDO\n");
return 0;
}
