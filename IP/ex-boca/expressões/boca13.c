#include <stdio.h>


int main (){
  double massa, acel, seg, vel, dist, trab;
  scanf("%lf %lf %lf", &massa, &acel, &seg);
  //convercao de unidades+calculo
  vel=(acel*seg)*3.6;
  dist= (acel*seg*seg)/2;
  trab= ((massa*1000)*((vel/3.6)*(vel/3.6)))/2;
  printf("VELOCIDADE = %.2lf\n", vel);
  printf("ESPACO PERCORRIDO = %.2lf\n", dist);
  printf("TRABALHO REALIZADO = %.2lf\n", trab);

return 0;
}
