#include <stdio.h>

int main() {
  int n1, n2, i;
  scanf("%d %d", &n1, &n2);
  if(n1%2!=0)
    printf("O PRIMEIRO NUMERO NAO E PAR\n");
   else {  for(i=1; i<n2; i++)
             {printf("%d ", n1);
              n1 = n1+2;
              }
            printf("%d\n",n1);
        }

return 0;
}
