#include <stdio.h>

int main(){
  int n, vet[1000000], i;
  scanf("%d", &n);
  for(i=0; i<n*n;i++){
      scanf("%d", &vet[i]);
  }
  for(i=0; i<n;i++){
    printf("%d\n", vet[(i+1)*(n-1)]);
  }
  
return 0;
}