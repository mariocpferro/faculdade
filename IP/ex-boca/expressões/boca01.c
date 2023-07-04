#include <stdio.h>


int main (){
  float batidas;
  int idade;
  scanf("%d", &idade);
  batidas= idade*365.25*24*3600;
  printf("O CORACAO BATEU %.2f VEZES\n", batidas);

return 0;
}
