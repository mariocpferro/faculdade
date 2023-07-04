#include <stdio.h>
#define MAX 100001

int min(int i, int j) {
    if(j<i)
       return j;
     else return i;
   }
   
int main() {
   char num[MAX], num_final[MAX];
   int n, d, i, j, k, ind_maior;
   scanf("%d %d", &n, &d);
   getchar();
   while(n || d){
     i = 1;
     j = n-d;
     k = 0;
     ind_maior = 0;
     scanf("%s", num);
     while(k<d) {
       while(i<=j){
         if(num[ind_maior]<num[i]){
            ind_maior = i;
         }
         i++;
        }
        num_final[k++]=num[ind_maior];
        ind_maior++;
        i = ind_maior+1;
        j = min(j+1, n-1);
       }
      num_final[d] ='\0';
      printf("%s\n", num_final);
      scanf("%d %d", &n, &d);
      getchar();
      }

return 0;
}