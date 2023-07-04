#include <stdio.h>

int main() {
  int qm, i;
  double vi, tx, txa, valor, renda;
  scanf("%lf %lf %d", &vi, &tx, &qm);
  txa = (1+tx);
  for(i=1;i<=qm;i++) {
    valor = vi*txa;
    renda = valor - vi;
    printf("a*(1+r)^%d = %.2lf, renda: %.2lf\n", i,valor, renda);
    txa = txa*(1+tx);
  }
return 0;
}
