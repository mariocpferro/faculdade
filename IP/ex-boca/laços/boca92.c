#include <stdio.h>

int main() {
  int j, K;
  float n, i, s, res, it;
  scanf("%f", &n);
  scanf("%f", &i);
  scanf("%d", &K);
  scanf("%f", &s);
  //"Tabuada de soma:", "Tabuada de subtracao:", "Tabuada de multiplicacao:"e "Tabuada de divisao:"
  printf("Tabuada de soma:\n");
  it = i;
  for(j=0; j<K; j++)
    { res = n + it;
	  printf("%.2f + %.2f = %.2f\n", n, it, res);
      it = it+s;
    }
   printf("Tabuada de subtracao:\n");
   it = i;
  for(j=0; j<K; j++)
    { res = n - it;
	  printf("%.2f - %.2f = %.2f\n", n, it, res);
      it = it+s;
    }
   printf("Tabuada de multiplicacao:\n");
   it = i;
  for(j=0; j<K; j++)
    { res = n * it;
	  printf("%.2f x %.2f = %.2f\n", n, it, res);
      it = it+s;
    }
   printf("Tabuada de divisao:\n");
   it = i;
  for(j=0; j<K; j++)
    { res = n / it;
	  printf("%.2f / %.2f = %.2f\n", n, it, res);
      it = it+s;
    }
    
 return 0;
 }